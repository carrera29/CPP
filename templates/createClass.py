import os
import sys

def generar_clase(nombre_archivo, secciones):
    
    # Obtener el directorio de trabajo actual
    directorio_actual = os.getcwd()

    # Construir la ruta completa del directorio "include"
    ruta_include = os.path.join(directorio_actual, 'include')
    print(f'Ruta del directorio "include": {ruta_include}')
    
    # Crear el directorio "include" si no existe
    try:
        os.makedirs(ruta_include)
    except FileExistsError:
        pass  # El directorio ya existe, no hay problema

    # Construir la ruta completa del archivo de salida en el directorio "include"
    ruta_salida = os.path.join(ruta_include, f'{nombre_archivo}.hpp')
    print(f'Ruta completa del archivo de salida: {ruta_salida}')
    
    # Verificar si el archivo ya existe
    if os.path.exists(ruta_salida):
        print(f'Error: El archivo {ruta_salida} ya existe. No se puede sobrescribir.')
        sys.exit(1)

    # Crear el código de la clase
    codigo_clase = f'#ifndef {nombre_archivo.upper()}_HPP\n'
    codigo_clase += f'#define {nombre_archivo.upper()}_HPP\n\n'

    codigo_clase += f'class {nombre_archivo} {{\n'

    # Agregar secciones
    for seccion, variables in secciones.items():
        codigo_clase += f'    {seccion}:\n'
        for variable in variables:
            codigo_clase += f'        {variable}\n'

    # Agregar funciones canónicas básicas
    codigo_clase += f'\npublic:\n'
    codigo_clase += f'    {nombre_archivo}();\n'
    codigo_clase += f'    ~{nombre_archivo}();\n'
    codigo_clase += f'    {nombre_archivo}(const {nombre_archivo}& other);\n'
    codigo_clase += f'    {nombre_archivo}& operator=(const {nombre_archivo}& other);\n'

    codigo_clase += '};\n\n'
    codigo_clase += '#endif\n'
    # Escribir el código generado en un archivo
    with open(ruta_salida, 'w') as archivo_hpp:
        archivo_hpp.write(codigo_clase)

if __name__ == "__main__":
    # Argumentos de línea de comandos
    if len(sys.argv) < 3:
        print("Uso: python script_generacion_cpp.py nombre_archivo seccion1 seccion2 ...")
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
            secciones[seccion].append(f'{tipo} {nombre_variable};')

    # Generar el archivo de C++
    generar_clase(nombre_archivo, secciones)

    print(f'Se ha generado el archivo {nombre_archivo}.hpp con la clase y variables.')
