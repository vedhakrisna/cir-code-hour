def leapYear(year):
    return (((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0));
year=int(input("enter year: "))
if(leapYear(year)): 
    print("Leap Year") 
else: 
    print("Not a Leap Year") 
      
