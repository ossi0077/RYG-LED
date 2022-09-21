//사용할 핀번호를 설정해줍니다.
#define ledR 3
#define ledY 4
#define ledG 5

void setup()
{
    //사용하려는 핀을 OUTPUT으로 설정합니다.
    pinMode(ledR, OUTPUT);
    pinMode(ledY, OUTPUT);
    pinMode(ledG, OUTPUT);
}

void loop()
{
    //LED점등 루프를 작성합니다.
    //점등 순서(R -> off -> Y -> off -> G -> off -> All on -> All off)
    turnON(3);
    delay(500);
    turnOFF(3);
    delay(500);
    turnON(4);
    delay(500);
    turnOFF(4);
    delay(500);
    turnON(5);
    delay(500);
    turnOFF(5);
    delay(500);
    turnON(1);
    delay(500);
    turnOFF(1);
    delay(500);
}

//LED가 켜지는 함수입니다.
void turnON(int x)
{
    //3,4,5 각각 R,Y,G순으로 작동하며 1의 경우 모든 LED가 점등합니다.
    if (x == 3)
    {
        digitalWrite(ledR, HIGH);
    }
    else if (x == 4)
    {
        digitalWrite(ledY, HIGH);
    }
    else if (x == 5)
    {
        digitalWrite(ledG, HIGH);
    }
    else if (x == 1)
    {
        digitalWrite(ledR, HIGH);
        digitalWrite(ledY, HIGH);
        digitalWrite(ledG, HIGH);
    }
}

//LED가 꺼지는 함수입니다.
void turnOFF(int x)
{
    //3,4,5 각각 R,Y,G순으로 작동하며 1의 경우 모든 LED가 꺼집니다.
    if (x == 3)
    {
        digitalWrite(ledR, LOW);
    }
    else if (x == 4)
    {
        digitalWrite(ledY, LOW);
    }
    else if (x == 5)
    {
        digitalWrite(ledG, LOW);
    }
    else if (x == 1)
    {
        digitalWrite(ledR, LOW);
        digitalWrite(ledY, LOW);
        digitalWrite(ledG, LOW);
    }
}