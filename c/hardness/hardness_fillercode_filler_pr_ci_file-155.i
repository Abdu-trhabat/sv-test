// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch155Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 0.8;
float var_1_3 = 3.25;
float var_1_4 = 15.25;
float var_1_5 = 3.2;
float var_1_6 = 100.5;
signed long int var_1_7 = 100;
double var_1_8 = 31.2;
signed long int var_1_9 = -256;
signed long int var_1_10 = 64;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned short int var_1_13 = 5;
unsigned short int var_1_14 = 51323;
unsigned short int var_1_15 = 5;
signed char var_1_16 = 50;
signed char var_1_17 = -16;
signed char var_1_18 = 25;
unsigned char var_1_19 = 32;
unsigned char var_1_21 = 64;
unsigned char var_1_22 = 2;
unsigned char var_1_23 = 4;
unsigned short int var_1_24 = 0;
signed short int var_1_25 = 128;
signed short int var_1_26 = -20555;
unsigned short int var_1_27 = 8;
signed long int var_1_28 = 32;
signed long int var_1_30 = 16;
signed long int var_1_31 = 64;
signed long int var_1_34 = 256;
double var_1_36 = 1.125;
unsigned short int var_1_37 = 10;
double var_1_41 = 100000000.75;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned short int var_1_45 = 64;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 0;
signed long int var_1_49 = -64;
unsigned short int var_1_50 = 32;
void initially(void) {
}
void step(void) {
                               if ( (( (((((var_1_5)) < (( (- (50.6))))) ? ((var_1_5)) : (( (- (50.6))))))) <= ( (( (((((var_1_4)) > ((var_1_3))) ? ((var_1_4)) : ((var_1_3))))) / (var_1_8))))) {
                               var_1_7 = (
   var_1_9
  );
 } else {
                                var_1_7 = (
   var_1_10
  );
 }
                   var_1_42 = (
  var_1_43
 );
                               if ( (( ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) == (var_1_9))) {
                                var_1_11 = (
   var_1_12
  );
 }
                   var_1_49 = (
                    ((((((((( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) )) < (( var_1_37 ))) ? (( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) )) : (( var_1_37 ))))) < 0 ) ? -(((((( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) )) < (( var_1_37 ))) ? (( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) )) : (( var_1_37 ))))) : (((((( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) )) < (( var_1_37 ))) ? (( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) )) : (( var_1_37 )))))))
 );
                               var_1_16 = (
                                ((
   var_1_17
  ) + (
   var_1_18
  ))
 );
                  if ( (( (~ (4))) > (var_1_10))) {
                   var_1_28 = (
                    ((((( ((((( (( var_1_30 ) - ( var_1_31 )) )) < (( ((((( var_1_10 )) > (( var_1_9 ))) ? (( var_1_10 )) : (( var_1_9 )))) ))) ? (( (( var_1_30 ) - ( var_1_31 )) )) : (( ((((( var_1_10 )) > (( var_1_9 ))) ? (( var_1_10 )) : (( var_1_9 )))) )))) )) > (( ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) ))) ? (( ((((( (( var_1_30 ) - ( var_1_31 )) )) < (( ((((( var_1_10 )) > (( var_1_9 ))) ? (( var_1_10 )) : (( var_1_9 )))) ))) ? (( (( var_1_30 ) - ( var_1_31 )) )) : (( ((((( var_1_10 )) > (( var_1_9 ))) ? (( var_1_10 )) : (( var_1_9 )))) )))) )) : (( ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) ))))
  );
 } else {
                   var_1_28 = (
   var_1_10
  );
 }
                   if ( (( ((var_1_31) * (var_1_10))) <= (var_1_37))) {
                    var_1_44 = (
   var_1_43
  );
 }
                   if ( (( (- ( ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))))) >= (10.25))) {
                    var_1_47 = (
                     ((
    var_1_43
   ) || (
    var_1_48
   ))
  );
 }
                   if ( ((var_1_8) >= (var_1_5))) {
                    var_1_50 = (
                     ((((((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) < 0 ) ? -(((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) : (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))))))
  );
 }
                               if (var_1_12) {
                                var_1_25 = (
                                 ((
                                  ((
                                   ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))
    ) - (
     25
    ))
   ) - (
    var_1_21
   ))
  );
 }
                   if ( (( ((var_1_10) >> (var_1_37))) < (var_1_31))) {
                    if ( (( (((((var_1_1)) < (( (((((var_1_4)) < ((9.999999999999956E13f))) ? ((var_1_4)) : ((9.999999999999956E13f))))))) ? ((var_1_1)) : (( (((((var_1_4)) < ((9.999999999999956E13f))) ? ((var_1_4)) : ((9.999999999999956E13f))))))))) <= (var_1_1))) {
                    var_1_36 = (
                     ((
     var_1_41
    ) - (
     99.5
    ))
   );
  } else {
                     if ( ((var_1_10) <= (var_1_34))) {
                     var_1_36 = (
     var_1_41
    );
   } else {
                      var_1_36 = (
     1.3
    );
   }
  }
 } else {
                    var_1_36 = (
   var_1_41
  );
 }
                   if ( (( ((var_1_37) | (var_1_9))) <= (var_1_10))) {
                    var_1_45 = (
                     (((((( var_1_14 ) - ( var_1_37 ))) < 0 ) ? -((( var_1_14 ) - ( var_1_37 ))) : ((( var_1_14 ) - ( var_1_37 )))))
  );
 }
                               if ( (( (~ ( ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))))) > (var_1_10))) {
                                var_1_27 = (
   10
  );
 }
                              if (var_1_11) {
                              var_1_1 = (
   var_1_3
  );
 } else {
                               var_1_1 = (
                                ((((( var_1_3 )) > (( (( (( var_1_4 ) + ( var_1_5 )) ) + ( var_1_6 )) ))) ? (( var_1_3 )) : (( (( (( var_1_4 ) + ( var_1_5 )) ) + ( var_1_6 )) ))))
  );
 }
                               if ( (( ((32.3) * (var_1_1))) > (var_1_8))) {
                                var_1_13 = (
                                 (((((( var_1_14 ) - ( var_1_15 ))) < 0 ) ? -((( var_1_14 ) - ( var_1_15 ))) : ((( var_1_14 ) - ( var_1_15 )))))
  );
 }
                               if ( (( (( ((var_1_27) ^ (var_1_7))) / (var_1_21))) >= (var_1_17))) {
                                var_1_19 = (
                                 ((
    var_1_22
   ) + (
    var_1_23
   ))
  );
 }
                               if ( ((var_1_13) > ( ((var_1_10) * (var_1_15))))) {
                                var_1_24 = (
                                 ((
    var_1_14
   ) - (
    var_1_13
   ))
  );
 } else {
                                var_1_24 = (
                                 ((
    var_1_14
   ) - (
                                  ((((( var_1_22 )) > (( var_1_21 ))) ? (( var_1_22 )) : (( var_1_21 ))))
   ))
  );
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -230584.3009213691400e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 2305843.009213691400e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -230584.3009213691400e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691400e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 assume_abort_if_not(var_1_8 != 0.0F);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483647);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483647);
 assume_abort_if_not(var_1_10 <= 2147483646);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 32767);
 assume_abort_if_not(var_1_14 <= 65534);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32767);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -63);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 255);
 assume_abort_if_not(var_1_21 != 0);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= -32766);
 assume_abort_if_not(var_1_26 <= -16382);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -1);
 assume_abort_if_not(var_1_30 <= 2147483646);
 var_1_31 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 2147483646);
 var_1_34 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_34 >= -2147483646);
 assume_abort_if_not(var_1_34 <= 2147483646);
 var_1_37 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 30);
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 0);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 if (var_1_11) {
 } else {
 }
 if ( (( (((((var_1_5)) < (( (- (50.6))))) ? ((var_1_5)) : (( (- (50.6))))))) <= ( (( (((((var_1_4)) > ((var_1_3))) ? ((var_1_4)) : ((var_1_3))))) / (var_1_8))))) {
 } else {
 }
 if ( (( ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))) == (var_1_9))) {
 }
 if ( (( ((32.3) * (var_1_1))) > (var_1_8))) {
 }
 if ( (( (( ((var_1_27) ^ (var_1_7))) / (var_1_21))) >= (var_1_17))) {
 }
 if ( ((var_1_13) > ( ((var_1_10) * (var_1_15))))) {
 } else {
 }
 if (var_1_12) {
 }
 if ( (( (~ ( ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))))) > (var_1_10))) {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                  ((
                   ((
                                           ((
         var_1_11
        ) ? (
                                           ((
          var_1_1
         ) == (
                                            ((float) (
           var_1_3
          ))
         ))
        ) : (
                                            ((
          var_1_1
         ) == (
                                             ((float) (
                                              ((((( var_1_3 )) > (( (( (( var_1_4 ) + ( var_1_5 )) ) + ( var_1_6 )) ))) ? (( var_1_3 )) : (( (( (( var_1_4 ) + ( var_1_5 )) ) + ( var_1_6 )) ))))
          ))
         ))
        ))
       ) && (
                                             ((
                                                  ((
                                                   ((((( var_1_5 )) < (( (- ( 50.6 )) ))) ? (( var_1_5 )) : (( (- ( 50.6 )) ))))
         ) <= (
                                                   ((
                                                    ((((( var_1_4 )) > (( var_1_3 ))) ? (( var_1_4 )) : (( var_1_3 ))))
          ) / (
           var_1_8
          ))
         ))
        ) ? (
                                             ((
          var_1_7
         ) == (
                                              ((signed long int) (
           var_1_9
          ))
         ))
        ) : (
                                              ((
          var_1_7
         ) == (
                                               ((signed long int) (
           var_1_10
          ))
         ))
        ))
       ))
      ) && (
                                            ((
                                                   ((
                                                    ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))
        ) == (
         var_1_9
        ))
       ) ? (
                                             ((
         var_1_11
        ) == (
                                              ((unsigned char) (
          var_1_12
         ))
        ))
       ) : (
        1
       ))
      ))
     ) && (
                                           ((
                                                  ((
                                                   ((
         32.3
        ) * (
         var_1_1
        ))
       ) > (
        var_1_8
       ))
      ) ? (
                                            ((
        var_1_13
       ) == (
                                             ((unsigned short int) (
                                              (((((( var_1_14 ) - ( var_1_15 ))) < 0 ) ? -((( var_1_14 ) - ( var_1_15 ))) : ((( var_1_14 ) - ( var_1_15 )))))
        ))
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                          ((
      var_1_16
     ) == (
                                           ((signed char) (
                                            ((
        var_1_17
       ) + (
        var_1_18
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 ((
                                                  ((
        var_1_27
       ) ^ (
        var_1_7
       ))
      ) / (
       var_1_21
      ))
     ) >= (
      var_1_17
     ))
    ) ? (
                                          ((
      var_1_19
     ) == (
                                           ((unsigned char) (
                                            ((
        var_1_22
       ) + (
        var_1_23
       ))
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_13
    ) > (
                                                ((
      var_1_10
     ) * (
      var_1_15
     ))
    ))
   ) ? (
                                         ((
     var_1_24
    ) == (
                                          ((unsigned short int) (
                                           ((
       var_1_14
      ) - (
       var_1_13
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_24
    ) == (
                                          ((unsigned short int) (
                                           ((
       var_1_14
      ) - (
                                            ((((( var_1_22 )) > (( var_1_21 ))) ? (( var_1_22 )) : (( var_1_21 ))))
      ))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_12
  ) ? (
                                        ((
    var_1_25
   ) == (
                                         ((signed short int) (
                                          ((
                                           ((
                                            ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))
      ) - (
       25
      ))
     ) - (
      var_1_21
     ))
    ))
   ))
  ) : (
   1
  ))
 ))
) && (
                                      ((
                                             ((
                                              (~ (
                                               ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))
   ))
  ) > (
   var_1_10
  ))
 ) ? (
                                       ((
   var_1_27
  ) == (
                                        ((unsigned short int) (
    10
   ))
  ))
 ) : (
  1
 ))
))
;
}
int main(void) {
 isInitial = 1;
 initially();
 while (1) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
