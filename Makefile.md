# Aprendiendo Makefile con los ejemplos mas **SABROSOS**
---
Esta guia nace como intento por entender completamente los Makefiles.
Los Makefiles parecen inundados de reglas ocultas y simbolos de magia,
y muchas veces preguntas sencillas no daban respuestas sencillas, en ese sentido
este resumen es un guia condensada sobre Makefiles.
Cada tema tiene una breve descripcion y un ejemplo independiente que puede ejecutar
uno mismo.

[Link de refencia](https://makefiletutorial.com/)
## ¿Porque los  Makefiles existen?
Los archivos Make se utilizan para ayudar a decidir que partes de un programa grande debn volver a 
compilarse. En la gran mayoria de los casos, se compilas archivos C o C++. Otros lenguajes suelen tener sus propias herramientas que tiene un propósito similar al de Make. 
El siguiente grafico  de dependencia es un ejemplo de  que puede crear Make.  Si las dependencias
de algun archivo cambian, el archivo se volverá a compilar.

<img src="makefile.png">
