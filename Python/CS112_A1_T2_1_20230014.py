# File: CS112_A1_T2_1_20230014.py
# Purpose: Two players start from 0 and alternatively add a number from 1 to 10 to the sum. The player who reaches 100 wins. 
# Author: Ahmed Hassan Abdel Hamed
# ID: 20230014

def main():

      
      #Display the name of the game
  print("\n\n\t\t\t\t\t\t*** Welcome to the 100 Game! ***\n\n")
      
      
      #Explaining how to play to the user
  print("Two players start from 0 and alternatively add a number from 1 to 10 to the sum.")
  print("The player who reaches 100 wins.\n\n\n")
  number = list(range(1,11)) # List of available numbers
  Total = 0 # initial value
  sub = 0   
  
  #Start Game
  while True:
      
      #Check Value 
      while True:
          try:
              if Total >= 90:
                  sub = 100 - Total
                  points_p1 = int(input(f"Player 1, enter a number between 1 and {sub}: "))
                  int(points_p1)  #<<<<<<<< only integer
                  
                  #Check number from 1 to 10 and display win in statu collect 100
                  if 1 <= points_p1 <= sub:
                                
                      #Sum of points for player 1
                      Total += points_p1
                      print(f"Total: {Total}")
                      break

                  else:
                       print(f"Please p1 enter a number between 1 and {sub}.") 
              else:
                   player_1 = int(input("Player 1, enter a number between 1 and 10: "))
                   int(player_1) #<<<<<<<< only integer
                   if player_1 in number: # check if the number is valid
                       Total += player_1
                       print(f"Total: {Total}")
                       break
                   else:
                       print("Please enter a valid number")                   
          except ValueError:
              print("Invalid input. Please p1 enter a valid number.")    
      if Total == 100:
         print("! Player_1 is winner 😎!")
         break
      
     
      #Check Value
      while True:
          try:
              if Total >= 90:
                  __sub__ = 100 - Total
                  points_p2 = int(input(f"Player 2, enter a number between 1 and {__sub__}: "))
                  int(points_p2)  #<<<<<<<< only intege
                  
                  #Check number from 1 to 10 and display win in statu collect 100
                  if 1 <= points_p2 <= __sub__:          
                       
                       #Sum of points for player 1
                       Total += points_p2
                       print(f"Total: {Total}")
                       break

                  else:
                       print(f"Please p2 enter a number between 1 and {sub}.") 
              else:
                  player_2 = int(input("Player 2, enter a number between 1 and 10: "))
                  int(player_2) #<<<<<<<< only integer
                  if player_2 in number: # check if the number is valid
                     Total += player_2
                     print(f"Total: {Total}")
                     break
                  else:
                       while True:
                          __valid__ = int(input("Please p2 enter valid number: "))
                          int(__valid__) #<<<<<<<< only integer
                          if __valid__ in number:
                              Total += __valid__
                              print(f"Total: {Total}")
                              break 
                          break
          except ValueError:
               print("Invalid input. Please p2 enter a valid number.")
      if Total == 100:
                  print("! Player_2 is winner 😎!")
                  break
                       
main()