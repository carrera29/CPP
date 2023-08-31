const fs = require('fs');
const { argv } = require('process');

// Cargar la plantilla
const template = fs.readFileSync('class_template.txt', 'utf-8');

// Reemplazar marcadores con valores específicos
const className = argv[3];
const classCode = template.replace(/ClassName/g, className);

// Escribir el código generado en un archivo
fs.writeFileSync(`${argv[2]}/${className}.cpp`, classCode);
