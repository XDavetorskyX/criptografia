Criptografía

Bases: Criptografía: Cómo Funcionan los Algoritmos de Encriptación https://youtu.be/aHHiOKrG77w?si=EkHEuSXU7MLAlMpr


Su programa deberá contar con los siguientes algoritmos sencillos de encriptación en la categoría de sustitución simétrica.
1.Cifrado del César
2.cifrado Vigenère


Modelación de Clase Criptograma (Métodos):
-Algoritmos de Cifrado
- Lectura del mensaje a descifrar
- Mostrado del Criptograma
(Incluir los atributos que consideren, como lo necesario para almacenar el mensaje.)


Main :
-Permitir al usuario que agregue un mensaje a encriptar 
-Mostrar un menú con los métodos de encriptación
-En base al método mostrar el criptograma (Mensaje encriptado)
-El programa finaliza cuando el usuario selecciona salir


Cifrado César:
-Un algoritmo de cifrado simétrico usa la misma clave para cifrar y descifrar los datos
-Al llegar a la Z, volvía a comenzar por la letra A:
Original: Z A P A T O 
Cifrado:  C D S D W R 
Clave: 3

Cifrado Vigenère
- En vez de sustituir todas las letras por un número fijo, se usa una palabra como clave que indica cuántos lugares se mueve cada letra.
-Si el mensaje es más largo que la clave, ésta se repite. Por ejemplo, utilizando la clave “ABCD” que indica mover cada letra 1, 2, 3 y 4 lugares:
Original: Z A P A T O
Clave: A B C D A B (1 2 3 4 1 2) 
Cifrado:  A C S E U Q
