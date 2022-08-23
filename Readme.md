# Use AnalogRead in nodeMCU ESP8266

[![aread.png](https://i.postimg.cc/g2tbxwmL/aread.png)](https://postimg.cc/bZnBMwGq)

```
Lectura: 20
```

Uso del pin de lectura análogica de la placa nodeMCU ESP8266.

## Hardware y software necesarios
- Placa de desarrollo nodeMCU ESP8266.
- Potenciometro $\displaystyle 10\Omega$
- [Arduino IDE](https://www.arduino.cc/en/software) o [Arduino CLI](https://arduino.github.io/arduino-cli/0.23/installation/).

## Funcionamiento
### Variables
- `Input`: Valor leido.
- `Cache`: Valor anterior leido.

### Funcionamiento
Uso de la funcićn `map` para leer el pin `A0` de 0 a 100. 
- Si el valor leido es mayor que 10 el pin `GPIO16` se apaga, de lo contrario permanecerá encendido.
- Cada que el valor leido cambie se muestra en el puerto serie el mensaje: 

```
Lectura: NN
```
