y=10
while True:
    try:
        s = int(input("enter the number :"))
        z = y / s
        print("Quotient: ",z)

    except ValueError as e:
        print("Invalid Input!!", e)
    except ArithmeticError as e:
        print("Invalid Input!!", e)
    else:
        print("Exit while loop")
        break
    finally:
        print("finally is always executed")
