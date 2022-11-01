number_of_inputs = int(input())

for i in range(number_of_inputs):
    target_step , jumper = map(int,input().split())
    minimum_number_of_steps = 0
    if target_step % jumper == 0 :
        minimum_number_of_steps = target_step // jumper
       
    else :
        minimum_number_of_steps = target_step // jumper
       
        remaining_steps = target_step - (target_step // jumper)*jumper
        minimum_number_of_steps += remaining_steps
       
        
    print(minimum_number_of_steps)