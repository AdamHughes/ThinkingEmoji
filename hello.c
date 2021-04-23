#include <stdio.h>

#define begin {
#define end }
#define go_over for
#define decide if
#define show printf
#define is_odd %
#define give_back return
#define whole_number int
#define decimal_number float
#define N 100
#define kappa ;
#define equals ==
#define stores =
#define is_less_than <

whole_number main (void)
begin
    decimal_number i stores 1.7 kappa
    go_over (whole_number j stores 0 kappa j is_less_than N kappa j++)
    begin
        decide (j is_odd 2 equals 0)
        begin
            i *= j kappa
        end
    end
    show ("i = %f\n", i) kappa
    give_back 0 kappa
end
