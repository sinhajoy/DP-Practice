with open('input.txt', 'r') as file:
     input_lines = [line.strip() for line in file]

sum=0
for i in input_lines:
    sum=sum+int(i)

print(sum)