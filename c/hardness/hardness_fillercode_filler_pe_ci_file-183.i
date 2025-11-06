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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch183Filler_PE_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -64;
unsigned char var_1_2 = 0;
signed char var_1_3 = 8;
signed char var_1_4 = -32;
signed long int var_1_5 = -8;
signed short int var_1_6 = 200;
float var_1_7 = 0.25;
float var_1_8 = 8.5;
float var_1_9 = 25.75;
signed short int var_1_10 = 0;
signed short int var_1_11 = 256;
signed short int var_1_12 = 5;
signed short int var_1_13 = 25;
signed short int var_1_14 = 1;
signed short int var_1_15 = 0;
unsigned short int var_1_16 = 32;
unsigned char var_1_17 = 100;
unsigned char var_1_18 = 25;
unsigned char var_1_19 = 32;
signed char var_1_20 = 100;
signed long int var_1_21 = 8;
signed char var_1_22 = 2;
signed char var_1_23 = 4;
unsigned char var_1_24 = 128;
float var_1_25 = 63.625;
float var_1_26 = 10.625;
unsigned char var_1_27 = 0;
double var_1_28 = 0.25;
double var_1_29 = 25.5;
double var_1_30 = 10.25;
double var_1_33 = 1.9;
double var_1_34 = 199.125;
double var_1_35 = 255.625;
double var_1_36 = 127.875;
unsigned long int var_1_37 = 32;
unsigned long int var_1_38 = 64;
float var_1_39 = 1.8;
unsigned long int var_1_41 = 5;
unsigned long int var_1_42 = 128;
unsigned short int var_1_43 = 100;
unsigned short int var_1_45 = 16;
unsigned char var_1_46 = 10;
unsigned long int var_1_47 = 2289826039;
unsigned long int var_1_48 = 128;
signed char last_1_var_1_20 = 100;
void initially(void) {
}
void step(void) {
 signed char stepLocal_1 = var_1_4;
 signed long int stepLocal_0 = last_1_var_1_20;
                                         if ( ((stepLocal_0) > (var_1_3))) {
                                          if ( ((stepLocal_1) > (last_1_var_1_20))) {
                                           var_1_5 = (
    last_1_var_1_20
   );
  }
 }
 signed long int stepLocal_2 = (( ((var_1_14) - (var_1_13))) / (var_1_21));
                               if ( ((var_1_5) <= (stepLocal_2))) {
                                var_1_20 = (
                                 ((((( (( (( var_1_22 ) - ( var_1_23 )) ) + ( var_1_4 )) )) > (( var_1_3 ))) ? (( (( (( var_1_22 ) - ( var_1_23 )) ) + ( var_1_4 )) )) : (( var_1_3 ))))
  );
 }
                              if ( (! (var_1_2))) {
                               var_1_1 = (
                                ((
    var_1_3
   ) + (
    var_1_4
   ))
  );
 }
                              if ( (( (((((var_1_7)) > ((var_1_8))) ? ((var_1_7)) : ((var_1_8))))) <= (var_1_9))) {
                               var_1_6 = (
                                ((((( (( var_1_10 ) - ( var_1_11 )) )) < (( var_1_3 ))) ? (( (( var_1_10 ) - ( var_1_11 )) )) : (( var_1_3 ))))
  );
 } else {
                               var_1_6 = (
                                ((
                                 ((
                                  ((((( var_1_12 )) < (( var_1_13 ))) ? (( var_1_12 )) : (( var_1_13 ))))
    ) + (
                                  ((((( var_1_14 )) < (( var_1_15 ))) ? (( var_1_14 )) : (( var_1_15 ))))
    ))
   ) - (
    256
   ))
  );
 }
                               if ( (( ((var_1_8) * (var_1_9))) <= (var_1_7))) {
                                var_1_16 = (
                                 ((((( (( var_1_15 ) + ( 1 )) )) < (( var_1_12 ))) ? (( (( var_1_15 ) + ( 1 )) )) : (( var_1_12 ))))
  );
 }
                               if (var_1_2) {
                                var_1_17 = (
                                 ((((( var_1_18 )) < (( var_1_19 ))) ? (( var_1_18 )) : (( var_1_19 ))))
  );
 }
                               if (var_1_2) {
                                if ( (( (- (var_1_7))) <= ( ((((( ((var_1_25) - (var_1_26)))) < ((var_1_9))) ? (( ((var_1_25) - (var_1_26)))) : ((var_1_9))))))) {
                                 var_1_24 = (
                                  ((((( var_1_19 )) < (( ((((( (( var_1_22 ) + ( var_1_23 )) )) > (( var_1_18 ))) ? (( (( var_1_22 ) + ( var_1_23 )) )) : (( var_1_18 )))) ))) ? (( var_1_19 )) : (( ((((( (( var_1_22 ) + ( var_1_23 )) )) > (( var_1_18 ))) ? (( (( var_1_22 ) + ( var_1_23 )) )) : (( var_1_18 )))) ))))
   );
  } else {
                                 var_1_24 = (
    0
   );
  }
 } else {
                                if (var_1_27) {
                                 var_1_24 = (
    var_1_23
   );
  }
 }
                  var_1_28 = (
  var_1_29
 );
                  if ( (( ((var_1_29) >= (var_1_28))) || ( ((var_1_5) < (var_1_21))))) {
                   if ( ((var_1_5) <= (var_1_21))) {
                    var_1_30 = (
                     ((((( (( var_1_33 ) + ( (( var_1_34 ) + ( var_1_35 )) )) )) < (( var_1_29 ))) ? (( (( var_1_33 ) + ( (( var_1_34 ) + ( var_1_35 )) )) )) : (( var_1_29 ))))
   );
  } else {
                    var_1_30 = (
    var_1_36
   );
  }
 }
                   var_1_37 = (
  var_1_38
 );
                   if ( (( ((var_1_38) & (var_1_13))) > (var_1_5))) {
                    var_1_39 = (
                     ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))
  );
 }
                   if ( ((var_1_35) < (var_1_29))) {
                    var_1_41 = (
                     ((
                      ((
     var_1_21
    ) + (
     var_1_42
    ))
   ) + (
    256u
   ))
  );
 }
                   if ( ((var_1_35) < (var_1_29))) {
                    if ( ((var_1_27) || ( ((var_1_36) == (var_1_29))))) {
                     var_1_43 = (
                      (((((( ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) ) + ( var_1_45 ))) < 0 ) ? -((( ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) ) + ( var_1_45 ))) : ((( ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) ) + ( var_1_45 )))))
   );
  }
 } else {
                    if ( (! ( ((var_1_37) < (var_1_15))))) {
                     var_1_43 = (
    10
   );
  } else {
                     if ( ((var_1_9) < (var_1_36))) {
                      var_1_43 = (
                       ((((5) < 0 ) ? -(5) : (5)))
    );
   }
  }
 }
                   if ( ((var_1_5) <= (var_1_42))) {
                    if ( ((var_1_29) < (var_1_36))) {
                     var_1_46 = (
    4
   );
  } else {
                     if ( (( ((var_1_21) % ( ((var_1_47) - (var_1_48))))) >= (var_1_5))) {
                      var_1_46 = (
     64
    );
   }
  }
 } else {
                    var_1_46 = (
   var_1_19
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -63);
 assume_abort_if_not(var_1_3 <= 63);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -63);
 assume_abort_if_not(var_1_4 <= 63);
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 16383);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 16383);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 16383);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 16383);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_21 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_21 >= -2147483648);
 assume_abort_if_not(var_1_21 <= 2147483647);
 assume_abort_if_not(var_1_21 != 0);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 63);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -461168.6018427383000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -230584.3009213691400e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691400e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -230584.3009213691400e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 4294967294);
 var_1_42 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 1073741823);
 var_1_45 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 32767);
 var_1_47 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_47 >= 2147483647);
 assume_abort_if_not(var_1_47 <= 4294967295);
 var_1_48 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_48 >= 1);
 assume_abort_if_not(var_1_48 <= 2147483646);
 assume_abort_if_not(var_1_48 != 2147483647);
}
void updateLastVariables(void) {
 last_1_var_1_20 = var_1_20;
}
int property(void) {
 if ( (! (var_1_2))) {
 }
 if ( ((last_1_var_1_20) > (var_1_3))) {
  if ( ((var_1_4) > (last_1_var_1_20))) {
  }
 }
 if ( (( (((((var_1_7)) > ((var_1_8))) ? ((var_1_7)) : ((var_1_8))))) <= (var_1_9))) {
 } else {
 }
 if ( (( ((var_1_8) * (var_1_9))) <= (var_1_7))) {
 }
 if (var_1_2) {
 }
 if ( ((var_1_5) <= ( (( ((var_1_14) - (var_1_13))) / (var_1_21))))) {
 }
 if (var_1_2) {
  if ( (( (- (var_1_7))) <= ( ((((( ((var_1_25) - (var_1_26)))) < ((var_1_9))) ? (( ((var_1_25) - (var_1_26)))) : ((var_1_9))))))) {
  } else {
  }
 } else {
  if (var_1_27) {
  }
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                                         ((
                                             (! (
        var_1_2
       ))
      ) ? (
                                          ((
        var_1_1
       ) == (
                                           ((signed char) (
                                            ((
          var_1_3
         ) + (
          var_1_4
         ))
        ))
       ))
      ) : (
       1
      ))
     ) && (
                                                    ((
                                                          ((
        last_1_var_1_20
       ) > (
        var_1_3
       ))
      ) ? (
                                                     ((
                                                           ((
         var_1_4
        ) > (
         last_1_var_1_20
        ))
       ) ? (
                                                      ((
         var_1_5
        ) == (
                                                       ((signed long int) (
          last_1_var_1_20
         ))
        ))
       ) : (
        1
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                        ((
                                              ((
                                               ((((( var_1_7 )) > (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 ))))
      ) <= (
       var_1_9
      ))
     ) ? (
                                         ((
       var_1_6
      ) == (
                                          ((signed short int) (
                                           ((((( (( var_1_10 ) - ( var_1_11 )) )) < (( var_1_3 ))) ? (( (( var_1_10 ) - ( var_1_11 )) )) : (( var_1_3 ))))
       ))
      ))
     ) : (
                                         ((
       var_1_6
      ) == (
                                          ((signed short int) (
                                           ((
                                            ((
                                             ((((( var_1_12 )) < (( var_1_13 ))) ? (( var_1_12 )) : (( var_1_13 ))))
         ) + (
                                             ((((( var_1_14 )) < (( var_1_15 ))) ? (( var_1_14 )) : (( var_1_15 ))))
         ))
        ) - (
         256
        ))
       ))
      ))
     ))
    ))
   ) && (
                                        ((
                                              ((
                                               ((
       var_1_8
      ) * (
       var_1_9
      ))
     ) <= (
      var_1_7
     ))
    ) ? (
                                         ((
      var_1_16
     ) == (
                                          ((unsigned short int) (
                                           ((((( (( var_1_15 ) + ( 1 )) )) < (( var_1_12 ))) ? (( (( var_1_15 ) + ( 1 )) )) : (( var_1_12 ))))
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                       ((
    var_1_2
   ) ? (
                                        ((
     var_1_17
    ) == (
                                         ((unsigned char) (
                                          ((((( var_1_18 )) < (( var_1_19 ))) ? (( var_1_18 )) : (( var_1_19 ))))
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                      ((
                                             ((
    var_1_5
   ) <= (
                                              ((
                                               ((
      var_1_14
     ) - (
      var_1_13
     ))
    ) / (
     var_1_21
    ))
   ))
  ) ? (
                                       ((
    var_1_20
   ) == (
                                        ((signed char) (
                                          ((((( (( (( var_1_22 ) - ( var_1_23 )) ) + ( var_1_4 )) )) > (( var_1_3 ))) ? (( (( (( var_1_22 ) - ( var_1_23 )) ) + ( var_1_4 )) )) : (( var_1_3 ))))
    ))
   ))
  ) : (
   1
  ))
 ))
) && (
                                      ((
  var_1_2
 ) ? (
                                       ((
                                              ((
                                               (- (
     var_1_7
    ))
   ) <= (
                                               ((((( (( var_1_25 ) - ( var_1_26 )) )) < (( var_1_9 ))) ? (( (( var_1_25 ) - ( var_1_26 )) )) : (( var_1_9 ))))
   ))
  ) ? (
                                        ((
    var_1_24
   ) == (
                                         ((unsigned char) (
                                          ((((( var_1_19 )) < (( ((((( (( var_1_22 ) + ( var_1_23 )) )) > (( var_1_18 ))) ? (( (( var_1_22 ) + ( var_1_23 )) )) : (( var_1_18 )))) ))) ? (( var_1_19 )) : (( ((((( (( var_1_22 ) + ( var_1_23 )) )) > (( var_1_18 ))) ? (( (( var_1_22 ) + ( var_1_23 )) )) : (( var_1_18 )))) ))))
    ))
   ))
  ) : (
                                        ((
    var_1_24
   ) == (
                                         ((unsigned char) (
     0
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_27
  ) ? (
                                        ((
    var_1_24
   ) == (
                                         ((unsigned char) (
     var_1_23
    ))
   ))
  ) : (
   1
  ))
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
