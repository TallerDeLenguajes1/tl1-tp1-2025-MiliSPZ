[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

#### TP1

2. 
    ### a. Investigar el archivo ".gitignore" ¿Por qué es conveniente incluirlo?¿Cuándo se debe hacer?¿Cómo configuraría el archivo .gitignore?
    

    Es conveniente incluirlo porque ayuda a mantener el repositorio limpio y organizado, evitando que se suban archivos innecesarios o problemáticos. Como por ejemplo, lo podes agregar cuando tenemos archivos temporales que no son necesarios que se carguen al repositorio.

    Lo podemos configurar de la siguiente manera:
    1.Abra git bash
    2.Navega a la ubicación de tu repositorio de Git
    3.Cree un archivo .gitignore para el repositorio
        _touch .gitignore_
    Si el comando es exitoso, no habrá salida

    Y se abre un archivo de texto simple donde cada línea indica qué archivos o carpetas ignorar. Ejemplos:
    Archivos de configuración del entorno
    .env
    config.php

3. 
    ### c.Revise los archivos subidos en su repositorio de github. ¿Qué archivos vé?¿Cuál cree que no hace falta que esté?

    Veo los siguientes archivos: ".gitignore"; "README.md"; "tp1_1.c"; "tp1_1.exe".

    No hace falta que este el "tp1_1.exe".

    ### g.Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué? Responder en el archivo readme.md

    Pude notar que dan los mismos resultados ya que el puntero almacena a la variable, entonces al querer mostrar la direccion de memoria de la variable almacenada en el puntero dara la misma direccion de la variable original.

    En el punto 4 se obtiene la direccion de memoria del punetero, en mi caso fue este: "Direccion de memoria del puntero: 000000bed3bff760"
    Es diferente porque es una varable de tipo puntero.





