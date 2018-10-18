#### Задача 1

Да се реализира клас Hero, който има в себе си следните полета:
 - level
 - class 
 - name
 - hp
За класа да се реализират само нужните според вас методи.

Да се реализира клас Arena, който съдържа в себе си списък с всички герой, участващи в арената. За този клас трябва да се реализират следните методи:
```
 Hero findHeroWithMaxLevel();
 Hero findHeroByClass(String class);
 Hero findHeroByName(String name);
 Hero findHeroWithMinHp();
 List<Hero> findAllHerosFromClass(String class);
 int averageLevel();
 int averageHp();
 ```
 
 #### Задача 2
 Да се реализира клас Car, който има в себе си следните полета:
- brand
- numberOfDoors
- numberOfSeats
- model
- hp
- price
 Да се реализира и клас Showroom, който съдържа поле cars. За този клас трябва да се реализират следните методи:
 ```
 List<Car> findAllCarsByModel(string model);
 List<Car> findAllCarsByDor(int numbeOfDors);
 List<Car> findAllCarsForBrand(string model);
 List<Car> findAllCarsBySeats(int numberOfSeats);
 List<Car> findAllCarsLessThanHp(int hp);  
 ```
    
 
