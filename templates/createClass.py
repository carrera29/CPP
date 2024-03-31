import os
import sys
import re

def generar_clase(nombre_archivo, secciones):
    
    # Obtener el directorio de trabajo actual
    directorio_actual = os.getcwd()

    # Construir la ruta completa del directorio "include" y "src"
    ruta_include = os.path.join(directorio_actual, 'include')
    ruta_src = os.path.join(directorio_actual, 'src')
    
    # Crear el directorio "include" si no existe
    try:
        os.makedirs(ruta_include)
    except FileExistsError:
        pass  # El directorio ya existe, no hay problema
    
    # Crear el directorio "src" si no existe
    try:
        os.makedirs(ruta_src)
    except FileExistsError:
        pass  # El directorio ya existe, no hay problema

    # Construir la ruta completa del archivo de salida "include" y "src"
    ruta_salida_include = os.path.join(ruta_include, f'{nombre_archivo}.hpp')
    ruta_salida_src = os.path.join(ruta_src, f'{nombre_archivo}.cpp')
    
    # Verificar los archivos ya existen
    if os.path.exists(ruta_salida_include):
        print(f'Error: El archivo {ruta_salida_include} ya existe. No se puede sobrescribir.')
        sys.exit(1)
        
    if os.path.exists(ruta_salida_src):
        print(f'Error: El archivo {ruta_salida_src} ya existe. No se puede sobrescribir.')
        sys.exit(1)
  
    
    # Crear el código de la clase
    codigo_clase = f'#ifndef {nombre_archivo.upper()}_HPP\n'
    codigo_clase += f'#define {nombre_archivo.upper()}_HPP\n\n'
    
    codigo_clase += f'# include <iostream>\n\n'

    codigo_clase += f'class {nombre_archivo} {{\n\n'

    # Agregar secciones
    for seccion, variables in secciones.items():
        codigo_clase += f'	{seccion}:\n\n'
        for variable in variables:
            codigo_clase += f'		{variable};\n'

    # Agregar funciones canónicas básicas
    codigo_clase += f'\n	public:\n\n'
    codigo_clase += f'		{nombre_archivo}();\n'
    codigo_clase += f'		~{nombre_archivo}();\n'
    codigo_clase += f'		{nombre_archivo}(const {nombre_archivo}& other);\n'
    codigo_clase += f'		{nombre_archivo}& operator=(const {nombre_archivo}& other);\n\n'
        
    
    # Crear funciones canónicas
    codigo_src = f'\n#include "{nombre_archivo}.hpp"\n\n'

    codigo_src += f'{nombre_archivo}::{nombre_archivo}() ' + '{\n'
    codigo_src += '	std::cout << "' + nombre_archivo + ' Default constructor called" << std::endl;\n'
    codigo_src += '}\n\n'

    codigo_src += f'{nombre_archivo}::~{nombre_archivo}() ' + '{\n'
    codigo_src += '	std::cout << "' + nombre_archivo + ' Default destructor called" << std::endl;\n'
    codigo_src += '}\n\n'
        
    codigo_src += f'{nombre_archivo}::{nombre_archivo}(const {nombre_archivo}& other) ' + '{\n'
    codigo_src += '	*this = other;\n'
    codigo_src += '	std::cout << "' + nombre_archivo + ' Copy constructor called" << std::endl;\n'
    codigo_src += '}\n\n'
        
    codigo_src += f'{nombre_archivo}& {nombre_archivo}::operator=(const {nombre_archivo}& other) ' + '{\n'
    codigo_src += '	std::cout << "' + nombre_archivo + ' Copy assignment called" << std::endl;\n'
    codigo_src += '	if (this != &other) {\n'
    for variable in variables:
        palabras = variable.split()
        nombre_variable = palabras[-1]
        codigo_src += f'		this->{nombre_variable} = other.{nombre_variable};\n'
    codigo_src += '	}\n'
    codigo_src += '	return *this;\n'
    codigo_src += '}\n'
	
 
    # Crear funciones get() para atributos privados
    for seccion, variables in secciones.items():
        if seccion == "private" :
            for variable in variables:
                palabras = variable.split()
                if len(palabras) > 1:
                    nombre_variable = palabras[-1]
                    tipo = ' '.join(palabras[:-1])
                # Corregir el nombre de la función get()
                nombre_get = 'get' + nombre_variable.capitalize()
                codigo_clase += f'		{tipo} {nombre_get}() const;\n'
                codigo_src += f'\n{tipo} {nombre_archivo}::{nombre_get}' + '() const {\n'
                codigo_src += f'    return this->{nombre_variable};\n'
                codigo_src += '}\n'
    
    codigo_clase += '\n};\n\n'
    codigo_clase += '#endif\n'
    
    # Escribir el código generado en los archivos
    with open(ruta_salida_include, 'w') as archivo_hpp:
        archivo_hpp.write(codigo_clase)

    with open(ruta_salida_src, 'w') as archivo_cpp:
        archivo_cpp.write(codigo_src)

if __name__ == "__main__":
    # Argumentos de línea de comandos
    if len(sys.argv) < 3:
        print("ejecute el siguiente comando: python createClass.py nombre_archivo seccion1 seccion2 ...")
        sys.exit(1)

    nombre_archivo = sys.argv[1]
    secciones = {seccion: [] for seccion in sys.argv[2:]}

    # Obtener variables para cada sección
    for seccion in secciones:
        while True:
            tipo = input(f"Ingrese el tipo de variable para la sección {seccion} (o 'fin' para terminar): ")
            if tipo.lower() == 'fin':
                break
            nombre_variable = input(f"Ingrese el nombre de la variable de tipo {tipo}: ")
            secciones[seccion].append(f'{tipo}	{nombre_variable}')

    # Generar el archivo de C++
    generar_clase(nombre_archivo, secciones)

    print(f'Se ha generado el archivo {nombre_archivo}.hpp y {nombre_archivo}.cpp')
