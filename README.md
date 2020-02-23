# ROBOT DE MINISUMO

	Documentacion necesaria para la construccion de un robot de minisumo lo mas sencillo posible.

# ELECTRONICA
	
	Contiene la siguiente electronica:
-Modulo VL53L0X: para la medidion de la distancia a los objetos delante del robot.
-2 módulos de IR de siguelineas: seran los encargados de detectar en la parte del Dohyo en la que se encuentra.
-Driver L9110: Controla los motores.
-Arduino nano: posiblemente para comenzar la mejor opcion debido a su pequeño tamaño.

# DISEÑO

	El robot consta de 3 piezas:
-Chasis: En el iran ubicados los sensores IR, el driver de motores y los motores.
-Parte superior: Funciona  como sijeccion de los motores y llevara el sensor VL530LX asi como la pieza adaptador del Arduino nano.
-Adaptador: Alojara el arduino nano.

# LIBRERIAS:

-VL53L0X
-L9110.h( esta ultima la saque de http://bricolabs.cc/wiki/index.php?title=Sapoconcho) 

