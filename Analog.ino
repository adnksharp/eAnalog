int cache = 0, input = 0;

void setup()
{
    Serial.begin(115200);
    pinMode(16, OUTPUT);
}

void loop()
{
    cache = input;
    input = map(analogRead(A0), 0, 1023, 0, 100);
    if (input > 10)
        digitalWrite(16, HIGH);
    else
        digitalWrite(16, LOW);
    if (input != cache)
        Serial.println("Lectura:\t" + String(input));
}