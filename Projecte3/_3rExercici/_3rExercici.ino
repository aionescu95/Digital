/**********************************************************************************
**                                                                               **
**                              Display 7 Segments                               **
**                                 3r Exercici                                   **
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
  digitalWrite(A, LOW);    //A
  digitalWrite(B, LOW);    
  digitalWrite(C, LOW);   
  digitalWrite(D, HIGH);    
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);  
    
  delay(pausa);
  
  digitalWrite(A, HIGH);    //D
  digitalWrite(B, LOW);    
  digitalWrite(C, LOW);   
  digitalWrite(D, LOW);    
  digitalWrite(E, LOW);    
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);  
    
  delay(pausa);
  
  digitalWrite(A, HIGH);    //R
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);   
  digitalWrite(D, HIGH);    
  digitalWrite(E, LOW);    
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);  
    
  delay(pausa);
  
  digitalWrite(A, HIGH);    //I
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);   
  digitalWrite(D, HIGH);    
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);  
    
  delay(pausa);
  
  digitalWrite(A, LOW);    //A
  digitalWrite(B, LOW);    
  digitalWrite(C, LOW);   
  digitalWrite(D, HIGH);    
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);  
    
  delay(pausa);
  
  digitalWrite(A, HIGH);    //N
  digitalWrite(B, HIGH);    
  digitalWrite(C, LOW);   
  digitalWrite(D, HIGH);    
  digitalWrite(E, LOW);    
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);  
    
  delay(pausa);
  
  
}
