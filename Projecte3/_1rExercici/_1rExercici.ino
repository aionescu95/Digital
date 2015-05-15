/**********************************************************************************
**                                                                               **
**                              Display 7 Segments                               **
**                                 1r Exercici                                   **
**                                Adrian Ionescu                                 **
**                                                                               **
**********************************************************************************/

const int A = 5;    
const int B = 6;         
const int C = 7;         
const int D = 8;         
const int E = 9;          
const int F = 10;
const int G = 11;
int pausa = 500;

void setup()
{
  pinMode(A, OUTPUT);     
  pinMode(B, OUTPUT);     
  pinMode(C, OUTPUT);     
  pinMode(D, OUTPUT);     
  pinMode(E, OUTPUT);     
  pinMode(F, OUTPUT); 
  pinMode(G, OUTPUT);  
  
}

void loop()
{
  digitalWrite(A, LOW);    //0
  digitalWrite(B, LOW);    
  digitalWrite(C, LOW);   
  digitalWrite(D, LOW);    
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);  
    
  delay(pausa);
  
  digitalWrite(A, HIGH);    //1
  digitalWrite(B, LOW);    
  digitalWrite(C, LOW);   
  digitalWrite(D, HIGH);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);  
    
  delay(pausa);
  
  digitalWrite(A, LOW);    //2
  digitalWrite(B, LOW);    
  digitalWrite(C, HIGH);   
  digitalWrite(D, LOW);    
  digitalWrite(E, LOW);    
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);  
    
  delay(pausa);
  
  digitalWrite(A, LOW);    //3
  digitalWrite(B, LOW);    
  digitalWrite(C, LOW);   
  digitalWrite(D, LOW);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);  
    
  delay(pausa);
  
  digitalWrite(A, HIGH);    //4
  digitalWrite(B, LOW);    
  digitalWrite(C, LOW);   
  digitalWrite(D, HIGH);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);  
    
  delay(pausa);
  
  digitalWrite(A, LOW);    //5
  digitalWrite(B, HIGH);    
  digitalWrite(C, LOW);   
  digitalWrite(D, LOW);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);  
    
  delay(pausa);
  
  digitalWrite(A, LOW);    //6
  digitalWrite(B, HIGH);    
  digitalWrite(C, LOW);   
  digitalWrite(D, LOW);    
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);  
    
  delay(pausa);
  
  digitalWrite(A, LOW);    //7
  digitalWrite(B, LOW);    
  digitalWrite(C, LOW);   
  digitalWrite(D, HIGH);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);  
    
  delay(pausa);
  
  digitalWrite(A, LOW);    //8
  digitalWrite(B, LOW);    
  digitalWrite(C, LOW);   
  digitalWrite(D, LOW);    
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);  
    
  delay(pausa);
  
  digitalWrite(A, LOW);    //9
  digitalWrite(B, LOW);    
  digitalWrite(C, LOW);   
  digitalWrite(D, HIGH);    
  digitalWrite(E, HIGH);    
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);  
    
  delay(pausa);
  
  
}
