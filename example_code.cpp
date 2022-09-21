//����� �ɹ�ȣ�� �������ݴϴ�.
#define ledR 3
#define ledY 4
#define ledG 5

void setup()
{
    //����Ϸ��� ���� OUTPUT���� �����մϴ�.
    pinMode(ledR, OUTPUT);
    pinMode(ledY, OUTPUT);
    pinMode(ledG, OUTPUT);
}

void loop()
{
    //LED���� ������ �ۼ��մϴ�.
    //���� ����(R -> off -> Y -> off -> G -> off -> All on -> All off)
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

//LED�� ������ �Լ��Դϴ�.
void turnON(int x)
{
    //3,4,5 ���� R,Y,G������ �۵��ϸ� 1�� ��� ��� LED�� �����մϴ�.
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

//LED�� ������ �Լ��Դϴ�.
void turnOFF(int x)
{
    //3,4,5 ���� R,Y,G������ �۵��ϸ� 1�� ��� ��� LED�� �����ϴ�.
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