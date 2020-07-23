withdraw = 0

while(withdraw >= 0):
    withdraw = float(input("Enter Money = "))

    if(withdraw < 0):
        print("Input Error, can't put negative number")
        withdraw = 0
        print("\n")
        continue;

    while(withdraw >= 100):

        if(withdraw % 100 == 0 and withdraw >= 0):
            break;

        else:
            print("No such money, Try again")
            print("\n")
            break;

    while(withdraw >= 0 and withdraw % 100 == 0):

        m1000 = withdraw // 1000
        withdraw = withdraw % 1000

        m500 = withdraw // 500
        withdraw = withdraw % 500

        m100 = withdraw // 100
        withdraw = withdraw % 100

        print("Cash B1000 = ", m1000)
        print("Cash B500 = ", m500)
        print("Cash B100 = ", m100)
        print("\n")
        break;
    

    
        
