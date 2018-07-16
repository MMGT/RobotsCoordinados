# RobotsCoordinados

El código aquí descrito implementa dos robots desarrollados en Arduino que se comunican mediante Bluetooth y cooperan entre sí mediante Bluetooth con fines educativos.

Uno de ellos es el clásico sigue-lineas, que envía la dirección que toma al otro. El otro robot es un control remoto, pero que mantiene una lectura del sensor de ultrasonido, de tal manera que si detecta un obstáculo, se detiene y envía al otro robot la orden de detenerse y detener el avance.

De esta manera ambos robots se mueven de manera coregrafiada.

Antes de realizar esta práctica, es necesario emparejar ambos dispositivos Bluetooth
