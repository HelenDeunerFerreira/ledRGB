const int vermelho = 11;
const int verde = 10;
const int azul = 9;

const int botao1 = 12;
const int botao2 = 7;
const int botao3 = 4;

int potenciometro1 = A0;
int potenciometro2 = A1;
int potenciometro3 = A2;
  
void setup()
{pinMode(vermelho, OUTPUT);
 pinMode(verde, OUTPUT);
 pinMode(azul, OUTPUT);
 
 pinMode(botao1, INPUT_PULLUP);
 pinMode(botao2, INPUT_PULLUP);
 pinMode(botao3, INPUT_PULLUP);
 
 pinMode(potenciometro1, INPUT);
 pinMode(potenciometro2, INPUT);
 pinMode(potenciometro3, INPUT);
}

void loop(){
  while(digitalRead(botao1) == HIGH){
    analogWrite(vermelho, 255);
    analogWrite(verde, 0);
    analogWrite(azul, 0);
    
    int apagar1 = digitalRead(botao1) == HIGH;
    
    if(apagar1){ 
       analogWrite(vermelho, 0);
       analogWrite(verde, 0);
       analogWrite(azul, 0);
  	}
  }
  
  while(digitalRead(botao2) == HIGH){
    analogWrite(vermelho, 0);
    analogWrite(verde, 255);
    analogWrite(azul, 0);
    
    int apagar2 = digitalRead(botao2) == HIGH;
    
    if(apagar2){ 
       analogWrite(vermelho, 0);
       analogWrite(verde, 0);
       analogWrite(azul, 0);  
  	}
  }
  
  while(digitalRead(botao3) == HIGH){
    analogWrite(vermelho, 0);
    analogWrite(verde, 0);
    analogWrite(azul, 255);
    
    int apagar3 = digitalRead(botao3) == HIGH;
    
    if(apagar3){ 
       analogWrite(vermelho, 0);
       analogWrite(verde, 0);
       analogWrite(azul, 0);  
  	}
  }
  
  if(analogRead(potenciometro1)> 0 && analogRead(potenciometro1) <= 255) > 0){
        analogWrite(vermelho, HIGH);
        analogWrite(verde, LOW);
        analogWrite(azul, LOW);
    
    }if(analogRead(potenciometro2)> 0 && analogRead(potenciometro2) <= 255){
        analogWrite(vermelho, LOW);
        analogWrite(verde, HIGH);
        analogWrite(azul, LOW);
     
  	}if(analogRead(potenciometro3)> 0 && analogRead(potenciometro3) <= 255){
        analogWrite(vermelho, LOW);
        analogWrite(verde, LOW);
        analogWrite(azul, HIGH);
  	}
}