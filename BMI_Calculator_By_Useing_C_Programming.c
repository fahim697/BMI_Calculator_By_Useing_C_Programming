
    #include <stdio.h>
    int main()
    {
        double p,x,y,height, weight, bmi;

        printf("Enter height in feet inches\n");
        scanf("%lf %lf", &x,&y);

        p = x * 12 + y;
        height = ( p * 2.54)/100;

        printf("Enter weight in kg\n");
        scanf("%lf", &weight);

        bmi = weight / (height * height);

        printf("Your Body Mass Index(BMI) is %lf\n", bmi);

        if(bmi < 15)
        {
            printf("Your BMI category is: Starvation\n");
        }
        else if(bmi >= 15.1 && bmi <= 17.5)
        {
            printf("Your BMI category is: Anorexic\n");
        }
        else if(bmi >= 17.6 && bmi <= 18.5)
        {
            printf("Your BMI category is: Underweight\n");
        }
        else if(bmi >= 18.6 && bmi <= 24.9)
        {
            printf("Your BMI category is: Ideal\n");
        }
        else if(bmi >= 25 && bmi <= 25.9)
        {
            printf("Your BMI category is: Overweight\n");
        }
        else if(bmi >= 30 && bmi <= 30.9)
        {
            printf("Your BMI category is: Obese\n");
        }
        else if(bmi >= 40)
        {
            printf("Your BMI category is: Morbidly Obese\n");
        }
        else
        {
            printf("Wrong entry\n");
        }

        return 0;
    }
