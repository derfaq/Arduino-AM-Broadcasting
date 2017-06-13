## Arduino AM Broadcasting


Aquí dejo una sencilla modificación a la función tone() de Arduino que, junto con un pequeño código en el setup() en nuestro sketch, nos permitirá transmitir sonidos en una estacion de radio de amplitud modulada generada por software :sunglasses:.

Como hacer / How to:

1. [Descargar](https://github.com/derfaq/Arduino-AM-Broadcasting/archive/master.zip) y descomprimir este repositorio.

2. Reemplazar el archivo Tone.cpp de Arduino, que en windows se ecuentra en `C:\Program Files (x86)\Arduino\hardware\arduino\avr\cores\arduino`, (es *obligatorio* guardar una copia del original, para restablecer la función original cuando queramos).

3. Cargar el sketch toneMelody.ino a nuestro Arduino, y conectar un cable al pin 9 (cuanto mas largo mejor).

4. Sintonizar una radio AM en los 1000 kHz, si escuchamos la melodia es que todo salió bien, estamos transmitiendo desde nuestro Arduino!.
> Si la recepción es baja, podemos probar tocando el cable (el cuerpo humano es una buena antena), o cambiando la fracuencia de transmisión modificando el valor de OCR1A en el setup().

---

### RTTTL

Para transmitir melodías mas complejas, podemos hacer uso de la [librería RTTL](https://github.com/ponty/arduino-rtttl-player).  
[RTTL](https://github.com/ponty/arduino-rtttl-player) significa Ring Tone Transfer Language, un formato para codificar melodías desarrollado por Nokia: es decir, el clásico ringtone del Nokia 1100.  
Dado que la librería se construye sobre la función tone(), una vez que tenemos modificada la función, podemos usar la librería de manera transparente para transmitir en AM (siempre sobre el pin 9, y agragando la configuración en el setup()).

Como hacer / How to:  

1. Descargar e instalar la librería [librería RTTL](https://github.com/ponty/arduino-rtttl-player).
> Obs: Hay una actualización de esta librería que no he probado, cuya ventaja es que es no-bloqueante, [non-blocking-rtttl-arduino](https://github.com/bslayerw/non-blocking-rtttl-arduino).   
2. Cargar el sketch Arduino_AM_RTTL.ino a nuestro Arduino.  

---

<a rel="license" href="http://creativecommons.org/licenses/by/4.0/"><img alt="Licencia Creative Commons" style="border-width:0" src="https://i.creativecommons.org/l/by/4.0/88x31.png" /></a><br /> © Facundo Daguerre, esta obra está bajo una <a rel="license" href="http://creativecommons.org/licenses/by/4.0/">Licencia Creative Commons Atribución 4.0 Internacional</a>.
