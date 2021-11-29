number=input("Enter a Number\n")
digit=input("Enter digit\n")

count=0
for i in number:

    if i==digit:
        count=count+1

print("Count is",count)
