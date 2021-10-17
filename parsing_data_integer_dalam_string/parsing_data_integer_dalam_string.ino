// source: 
// https://www.youtube.com/watch?v=eKH4mZQhBWQ
// https://www.youtube.com/watch?v=q416XXJDE_M
 
long i=0;
void setup()
{
  Serial.begin(9600);
  Serial.setTimeout(10);
}
 
void loop()
{
  while(Serial.available()==0){}
  i=Serial.parseInt();
  
  // saya tambahkan sedikit modifikasi di bagian ini, dg menambahkan if(Serial.available()>0)
  // karena sebelumnya selalu muncul i = 0 di bagian akhir serial monitor.
  if(Serial.available()>0){
  Serial.print("i = ");
  Serial.println(i);
  }
}
