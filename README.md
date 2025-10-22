# *Lectura-de-encoder*
## Descrpción del código
Este programa en Arduino permite leer y determinar el sentido de giro de un encoder rotatorio utilizando interrupciones externas.

## Objetivo
Permitir al usuario medir el movimiento rotacional (posición incremental y dirección) de un encoder mediante Arduino, ideal para proyectos de control de motores, robótica o medición de ángulos.


## Funcionamiento
•	Pines utilizados:

- `pinA`: Pin digital 2.
- `pinB`: Pin digital 3.

• El programa detecta los pulsos generados por el canal A del encoder mediante una interrupción `attachInterrupt()`, y lee el canal B para determinar la dirección de giro:

- Si el canal B está en HIGH cuando ocurre el pulso → el giro es horario.

- Si el canal B está en LOW → el giro es antihorario.

• Se mantiene un contador `contador` que aumenta o disminuye según la dirección de rotación.

## Conclusión

Este proyecto demuestra cómo leer y procesar las señales de un encoder rotatorio utilizando interrupciones externas en Arduino, logrando una detección precisa del sentido de giro y el número de pasos.

Gracias a su simplicidad y eficiencia, este código puede servir como base para:

• Control de motores con realimentación (control de posición o velocidad).

• Medición angular o de desplazamiento.

• Interfaces rotatorias (como perillas o selectores digitales).

En conclusión, se validó correctamente el funcionamiento del encoder, mostrando una lectura confiable, direccional y en tiempo real.




•	El resultado se imprime en consola con -`sp.pprint()`
   -NumPy: para cálculos numéricos.
   
   -Sympy: para cálculos simbólicos.
   
•	Se organizaron los programas en módulos separados:

- `forward_kinematics_dh.py`: implementa el cálculo numérico de matrices DH.
- `forward_kinematics_dh_symbolic.py`: implementa el cálculo simbólico de matrices DH.
- `forward_kinematics_dh_class.py`: integra ambas funcionalidades en una clase reutilizable.


### 2.Definición de parámetros Denavit-Hartenberg (DH)
• Para cada robot se elaboró la tabla DH en el formato estándar [θ_i,d_i,a_i,α_i].

•Los parámetros fueron obtenidos del libro Control de robots manipuladores de Fernando Reyes Cortés (págs. 226–237).

•Estos parámetros fueron implementados en archivos independientes:

	RR.py → robot planar de dos grados de libertad (RR).
   
	RRR.py → robot antropomórfico de tres grados de libertad (RRR).
   
	RRP.py → robot SCARA con configuración RRP.



