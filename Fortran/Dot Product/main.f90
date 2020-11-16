!Dot Product of two vectors

program dp
              integer, dimension(5) :: a, b
              a = (/1, 7, 3, 4, 5/)
              b = (/6, 7, 8, 9, 10/)
              print '(5i5)', a
              print *
              print '(5i5)', b
              print *
              print *, sum (a*b)
          end program dp

