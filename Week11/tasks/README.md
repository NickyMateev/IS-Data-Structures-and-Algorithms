# Fakebook

## Person

За социалната ни мрежа ще се нуждаем от клас `Person`, който да се държи по следния начин:

```csharp
var stoyan = new Person("Stoyan", "stoyan@mail.com", GenderType.MALE)

stoyan.Name == "Stoyan" // true
stoyan.Email == "stoyan@mail.com"  // true
stoyan.Gender == GenderType.MALE // true
stoyan.IsMale == true // true
stoyan.IsFemale == false // true
```

Класът `Person` също трбява да може да поддържа следните функционалности:

* Да може да се принтира на екрана
* При регистрирането на човек, да се проверява дали меейла е валиден (направете проста проверка за `@` и `.`)
* Да може да се пресмята хеш на дадене `Person` обект (така евентуално ще може по-лесно да сравнявате обекти от този тип)

Две `Person` инстанции са еквивалентни, когато `Name`, `Email` и `Gender` са равни.

## SocialNetwork

Време е и за социалната мрежа!

Имплементирайте клас `SocialNetwork`, който да има следните публични методи:

* `AddPerson(person)` - добавя `person` в социалната мрежа. Човекът има 0 приятели за момента. Ако човекът е вече в социалната мрежа, хвърлете грешка.
* `HasPerson(person)` - връща `true` или `false` в зависимост от това дали `person` е социалната мрежа или не.
* `MakeFriends(person1, person2)` - прави двама души приятели. Хвърлете грешка, ако те вече са приятели. **Приятелствата са двустранни** - `person1` е приятел с `person2` и `person2` е приятел с `person1`. **Ако `person1` или `person2` не са част от социалната мрежа, добавете ги!**
* `AreFriends(person1, person2)` - връща `true`, ако двама души са приятели. В противен случай връща `false`.
* `FriendsOf(person)` - връща списък от `Person`-и представляващ приятелите на `person`. Връща `false`, ако `person` не е част от мрежата.
* `ConnectionLevel(person1, person2)` - връща нивото на взаимоотношение между `person1` и `person2`. Ако те са приятели, то нивото е 1. В противен случай, бройте броя прители, през които трябва да минете почвайки от `person1`, за да стигнете до `person2`. Ако не са свързани изобщо, врънете `-1`, както и в случаите, когато някой от двамата не в мрежата.
* `AreConnected(person1, person2)` - връща `true`, ако двама души са свързани по някакъв начин, измежду общи приятели, или `false` в противен случай.
* `HowManyGenderInNetwork(level, person, gender)` - връща общия брой на хора от дадения `gender` пол (male или female), които са до `level` на брой дълбочина в мрежата на `person`. Ако `level == 2`, ще трябва да минем през всички приятели на `person`, както и всички техни приятели.

## Пример

```csharp
var network = new SocialNetwork()
stoyan = new Person("Stoyan", "stoyan@mail.com", GenderType.Male)
nicky = new Person("Nicky", "nicky@mail.com", GenderType.Male)
angelina = new Person("Angelina", "angelina@mail.com", GenderType.Female)

network.AddPerson(stoyan)
network.AddPerson(nicky)
network.AddPerson(angelina)

network.MakeFriends(stoyan, nicky)
network.MakeFriends(nicky, angelina)

network.ConnectionLevel(stoyan, nicky) == 1 // true
network.ConnectionLevel(stoyan, angelina) == 2 // true

network.HowManyGenderInNetwork(1, nicky, GenderType.Female) == 1 // true
```

## Save and Load

Бихме искали да можем да запазваме и зареждаме социалната ни мрежа в различни формати и на различни източници (във файл, в база и т.н.). Затова се погрижете да имате нужните методи за целта.

## Console Interface

Напишете конзолно приложение за работене със социалната мрежа. То трябва да поддържа всички операции, които `SocialNetwork` класа поддържа, както и записването и четенето на мрежата във и от файл.
