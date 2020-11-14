!Program to print the grade of a subject

program grade
    implicit none
    integer M
    character G
    print *, "Enter the marks scored in the subject"
    read *, M
    if(m>=90 .and. m<100)then
        G= 'S'
        else if(m>=80 .and. m<89)then
            G= 'A'
            else if(m>=70 .and. m<79)then
                G= 'B'
                else if(m>=60 .and. m<69)then
                    G= 'C'
                    else if(m>=50 .and. m<59)then
                        G= 'D'
                        !else
                           ! G= 'F'

    end if
    print *, "The Grade obtained in the subject is: ",G
end program grade
