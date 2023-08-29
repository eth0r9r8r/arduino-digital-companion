// 
void coinflip(int h_or_t)
{
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);

  display.setCursor(2,4);
  display.println("HEADS");
  display.setCursor(14,24);
  display.println("OR");
  display.setCursor(2,44);
  display.println("TAILS?");
  display.display();
  delay(1000);

  for(int i = 1; i < 13; i++){
    display.fillRect(80, 0, 40, 64, BLACK);
    if(i%2){
      display.fillCircle(100, 2 + (3*i), 17, WHITE);
      display.drawCircle(100, 2 + (3*i), 16, BLACK);
      display.display();
      delay(40);
    } else{
      display.drawFastHLine(83, 2 + (3*i), 35, WHITE);
      display.fillRect(84, 1 + (3*i), 33, 3, WHITE);
      display.fillRect(89, 0 + (3*i), 23, 5, WHITE);
      display.display();
      delay(20);
    }
  }

  display.fillRect(0, 0, 80, 64, BLACK);
  display.setCursor(2,34);
  display.fillCircle(100, 41, 17, WHITE);
  display.drawCircle(100, 41, 16, BLACK);

  if(h_or_t){
    display.fillRect(88, 34, 25, 16, BLACK);
    display.println("TAILS!");
    display.drawBitmap(88, 34, LOON_25X16, 25, 16, WHITE);
  } else{
    display.println("HEADS!");
    display.fillRect(91, 29, 17, 24, BLACK);
    display.drawBitmap(91, 29, QUEEN_17X24, 17, 24, WHITE);
  }

  display.display();
  delay(2000);
}

void old_tired(void)
{
  for(int i = 0; i < 3; i++){

    display.clearDisplay();

    display.drawCircle(78, 24, 8, WHITE);
    display.drawCircle(78, 26, 8, WHITE);
    display.fillCircle(78, 28, 2, WHITE);

    display.drawCircle(49, 24, 8, WHITE);
    display.drawCircle(49, 26, 8, WHITE);
    display.fillCircle(49, 28, 2, WHITE);

    display.fillRect(55, 43, 18, 3, WHITE);
    display.fillRect(53, 44, 4, 3, WHITE);
    display.fillRect(71, 44, 4, 3, WHITE);
    display.fillRect(52, 45, 4, 3, WHITE);
    display.fillRect(72, 45, 4, 3, WHITE);
    display.drawFastHLine(59, 48, 10, WHITE);

    display.display();
    delay(3000);

    display.fillCircle(78, 25, 7, BLACK);
    display.drawFastHLine(72, 28, 13, WHITE);

    display.fillCircle(49, 25, 7, BLACK);
    display.drawFastHLine(43, 28, 13, WHITE);

    display.display();
    delay(200);
  }
}

void crazy(void)
{
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);

  display.setCursor(10,4);
  display.println("OR");
  display.setCursor(24,24);
  display.println("OR");
  display.setCursor(10,44);
  display.println("OR?");
  display.display();
  delay(3000);

  display.clearDisplay();
  display.setTextSize(3);
  display.setCursor(50,34);
  display.println("OR!");
  display.display();
  delay(1000);

}