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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch97Filler_PS_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 2;
unsigned short int var_1_2 = 16;
unsigned short int var_1_3 = 32;
signed char var_1_5 = 8;
signed char var_1_6 = 25;
float var_1_7 = 128.375;
double var_1_8 = -0.2;
float var_1_9 = 5.8;
float var_1_10 = 2.2640000000000002;
float var_1_11 = 5.4;
unsigned char var_1_12 = 1;
signed short int var_1_14 = -64;
unsigned char var_1_15 = 1;
unsigned long int var_1_16 = 0;
unsigned char var_1_17 = 50;
unsigned long int var_1_18 = 1189571775;
float var_1_19 = 10000.4;
float var_1_20 = 255.6;
float var_1_21 = 64.25;
signed short int var_1_22 = -4;
unsigned char var_1_23 = 1;
signed char var_1_24 = 50;
signed char var_1_25 = 64;
signed short int var_1_26 = 4;
unsigned short int var_1_27 = 8;
unsigned char var_1_28 = 16;
unsigned short int var_1_29 = 8;
unsigned short int var_1_30 = 2;
unsigned short int var_1_31 = 48416;
unsigned short int var_1_32 = 8;
unsigned char var_1_33 = 4;
unsigned char var_1_34 = 25;
unsigned long int var_1_35 = 32;
unsigned char var_1_36 = 8;
double var_1_37 = -0.75;
double var_1_38 = 31.75;
double var_1_39 = 5.5;
double var_1_40 = 32.5;
signed short int var_1_41 = -2;
signed short int var_1_42 = -100;
unsigned char var_1_43 = 16;
unsigned short int var_1_44 = 10;
unsigned char last_1_var_1_12 = 1;
void initially(void) {
}
void step(void) {
             if (var_1_23) {
             if ( ((var_1_24) <= (var_1_25))) {
              var_1_22 = (
               ((
                ((((( var_1_24 )) > (( ((((( -128 )) < (( var_1_25 ))) ? (( -128 )) : (( var_1_25 )))) ))) ? (( var_1_24 )) : (( ((((( -128 )) < (( var_1_25 ))) ? (( -128 )) : (( var_1_25 )))) ))))
    ) + (
     var_1_26
    ))
   );
  }
 } else {
              var_1_22 = (
               ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))
  );
 }
             if ( (( ((var_1_26) / (var_1_28))) < (var_1_22))) {
              var_1_27 = (
   var_1_28
  );
 } else {
              var_1_27 = (
               ((((( ((((( ((((( var_1_28 )) < (( var_1_29 ))) ? (( var_1_28 )) : (( var_1_29 )))) )) > (( var_1_30 ))) ? (( ((((( var_1_28 )) < (( var_1_29 ))) ? (( var_1_28 )) : (( var_1_29 )))) )) : (( var_1_30 )))) )) > (( (( var_1_31 ) - ( var_1_32 )) ))) ? (( ((((( ((((( var_1_28 )) < (( var_1_29 ))) ? (( var_1_28 )) : (( var_1_29 )))) )) > (( var_1_30 ))) ? (( ((((( var_1_28 )) < (( var_1_29 ))) ? (( var_1_28 )) : (( var_1_29 )))) )) : (( var_1_30 )))) )) : (( (( var_1_31 ) - ( var_1_32 )) ))))
  );
 }
             if (var_1_23) {
              var_1_33 = (
   var_1_34
  );
 }
             if ( (( (((((var_1_33)) < ((var_1_24))) ? ((var_1_33)) : ((var_1_24))))) >= (var_1_26))) {
              var_1_35 = (
   var_1_29
  );
 }
             if ( (( ((var_1_37) * ( ((var_1_38) - (var_1_39))))) >= (var_1_40))) {
              if ( (( (~ (var_1_27))) <= ( (((((((((var_1_33)) < ((var_1_29))) ? ((var_1_33)) : ((var_1_29))))) < 0 ) ? -((((((var_1_33)) < ((var_1_29))) ? ((var_1_33)) : ((var_1_29))))) : ((((((var_1_33)) < ((var_1_29))) ? ((var_1_33)) : ((var_1_29)))))))))) {
               var_1_36 = (
    var_1_34
   );
  } else {
               var_1_36 = (
    5
   );
  }
 } else {
              var_1_36 = (
   var_1_34
  );
 }
             if ( (( ((var_1_27) | (1000))) >= ( ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))) {
              if ( (( (( (~ (8u))) * (100u))) > ( ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))))) {
               var_1_41 = (
                ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))
   );
  }
 }
             var_1_42 = (
  var_1_36
 );
             var_1_43 = (
  var_1_34
 );
             var_1_44 = (
  var_1_29
 );
 unsigned short int stepLocal_1 = var_1_2;
 signed long int stepLocal_0 = ((var_1_2) + (var_1_3));
                                           if ( ((stepLocal_0) < (-200))) {
                                            if (last_1_var_1_12) {
                                             if ( ((stepLocal_1) > ( (- (var_1_3))))) {
                                              var_1_1 = (
     var_1_2
    );
   } else {
                                              var_1_1 = (
     var_1_3
    );
   }
  } else {
                                             var_1_1 = (
    10u
   );
  }
 } else {
                                            var_1_1 = (
   0u
  );
 }
                                if ( (( (((((var_1_2)) > ((var_1_1))) ? ((var_1_2)) : ((var_1_1))))) > ( ((var_1_3) * (2u))))) {
                                 if ( (( (( ((32) * (-25))) | (var_1_2))) >= (var_1_1))) {
                                  if ( ((var_1_3) > (var_1_1))) {
                                   var_1_5 = (
     var_1_6
    );
   }
  }
 } else {
                                 var_1_5 = (
   var_1_6
  );
 }
                                if ( ((var_1_17) <= (var_1_5))) {
                                 var_1_16 = (
                                  ((
                                   ((
     var_1_18
    ) - (
     var_1_3
    ))
   ) + (
    var_1_17
   ))
  );
 } else {
                                 var_1_16 = (
                                  ((((( var_1_17 )) < (( (( var_1_3 ) + ( var_1_2 )) ))) ? (( var_1_17 )) : (( (( var_1_3 ) + ( var_1_2 )) ))))
  );
 }
 unsigned long int stepLocal_3 = ((var_1_16) / (var_1_14));
                                if ( ((stepLocal_3) <= ( ((var_1_6) * (var_1_1))))) {
                                 var_1_12 = (
   var_1_15
  );
 }
 unsigned long int stepLocal_4 = var_1_1;
                                if (var_1_15) {
                                 if ( ((var_1_16) < (stepLocal_4))) {
                                  var_1_19 = (
                                   ((
                                    ((
      var_1_20
     ) + (
      var_1_21
     ))
    ) - (
     9.125f
    ))
   );
  } else {
                                  var_1_19 = (
                                   ((
     0.19999999999999996f
    ) - (
     var_1_20
    ))
   );
  }
 } else {
                                 var_1_19 = (
   var_1_20
  );
 }
 unsigned char stepLocal_2 = var_1_12;
                                if ( (( ((127.75) <= (var_1_8))) && (stepLocal_2))) {
                                 var_1_7 = (
                                  ((((( (( var_1_9 ) + ( var_1_10 )) )) > (( var_1_11 ))) ? (( (( var_1_9 ) + ( var_1_10 )) )) : (( var_1_11 ))))
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -127);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -32768);
 assume_abort_if_not(var_1_14 <= 32767);
 assume_abort_if_not(var_1_14 != 0);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 255);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 1073741823);
 assume_abort_if_not(var_1_18 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -128);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -127);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= -16383);
 assume_abort_if_not(var_1_26 <= 16383);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 255);
 assume_abort_if_not(var_1_28 != 0);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 65534);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 65534);
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 32767);
 assume_abort_if_not(var_1_31 <= 65534);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 32767);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 254);
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_12 = var_1_12;
}
int property(void) {
 if ( (( ((var_1_2) + (var_1_3))) < (-200))) {
  if (last_1_var_1_12) {
   if ( ((var_1_2) > ( (- (var_1_3))))) {
   } else {
   }
  } else {
  }
 } else {
 }
 if ( (( (((((var_1_2)) > ((var_1_1))) ? ((var_1_2)) : ((var_1_1))))) > ( ((var_1_3) * (2u))))) {
  if ( (( (( ((32) * (-25))) | (var_1_2))) >= (var_1_1))) {
   if ( ((var_1_3) > (var_1_1))) {
   }
  }
 } else {
 }
 if ( (( ((127.75) <= (var_1_8))) && (var_1_12))) {
 }
 if ( (( ((var_1_16) / (var_1_14))) <= ( ((var_1_6) * (var_1_1))))) {
 }
 if ( ((var_1_17) <= (var_1_5))) {
 } else {
 }
 if (var_1_15) {
  if ( ((var_1_16) < (var_1_1))) {
  } else {
  }
 } else {
 }
 return ((
             ((
              ((
               ((
                ((
                                                     ((
                                                          ((
                                                           ((
        var_1_2
       ) + (
        var_1_3
       ))
      ) < (
       -200
      ))
     ) ? (
                                                      ((
       last_1_var_1_12
      ) ? (
                                                       ((
                                                             ((
         var_1_2
        ) > (
                                                              (- (
          var_1_3
         ))
        ))
       ) ? (
                                                        ((
         var_1_1
        ) == (
                                                         ((unsigned long int) (
          var_1_2
         ))
        ))
       ) : (
                                                        ((
         var_1_1
        ) == (
                                                         ((unsigned long int) (
          var_1_3
         ))
        ))
       ))
      ) : (
                                                       ((
        var_1_1
       ) == (
                                                        ((unsigned long int) (
         10u
        ))
       ))
      ))
     ) : (
                                                      ((
       var_1_1
      ) == (
                                                       ((unsigned long int) (
        0u
       ))
      ))
     ))
    ) && (
                                          ((
                                               ((
                                                ((((( var_1_2 )) > (( var_1_1 ))) ? (( var_1_2 )) : (( var_1_1 ))))
      ) > (
                                                ((
        var_1_3
       ) * (
        2u
       ))
      ))
     ) ? (
                                           ((
                                                 ((
                                                  ((
                                                   ((
          32
         ) * (
          -25
         ))
        ) | (
         var_1_2
        ))
       ) >= (
        var_1_1
       ))
      ) ? (
                                            ((
                                                   ((
         var_1_3
        ) > (
         var_1_1
        ))
       ) ? (
                                             ((
         var_1_5
        ) == (
                                              ((signed char) (
          var_1_6
         ))
        ))
       ) : (
        1
       ))
      ) : (
       1
      ))
     ) : (
                                           ((
       var_1_5
      ) == (
                                            ((signed char) (
        var_1_6
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 ((
       127.75
      ) <= (
       var_1_8
      ))
     ) && (
      var_1_12
     ))
    ) ? (
                                          ((
      var_1_7
     ) == (
                                           ((float) (
                                            ((((( (( var_1_9 ) + ( var_1_10 )) )) > (( var_1_11 ))) ? (( (( var_1_9 ) + ( var_1_10 )) )) : (( var_1_11 ))))
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
      var_1_16
     ) / (
      var_1_14
     ))
    ) <= (
                                                ((
      var_1_6
     ) * (
      var_1_1
     ))
    ))
   ) ? (
                                         ((
     var_1_12
    ) == (
                                          ((unsigned char) (
      var_1_15
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_17
   ) <= (
    var_1_5
   ))
  ) ? (
                                        ((
    var_1_16
   ) == (
                                         ((unsigned long int) (
                                          ((
                                           ((
       var_1_18
      ) - (
       var_1_3
      ))
     ) + (
      var_1_17
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_16
   ) == (
                                         ((unsigned long int) (
                                          ((((( var_1_17 )) < (( (( var_1_3 ) + ( var_1_2 )) ))) ? (( var_1_17 )) : (( (( var_1_3 ) + ( var_1_2 )) ))))
    ))
   ))
  ))
 ))
) && (
                                       ((
  var_1_15
 ) ? (
                                        ((
                                               ((
    var_1_16
   ) < (
    var_1_1
   ))
  ) ? (
                                         ((
    var_1_19
   ) == (
                                          ((float) (
                                            ((
                                             ((
       var_1_20
      ) + (
       var_1_21
      ))
     ) - (
      9.125f
     ))
    ))
   ))
  ) : (
                                          ((
    var_1_19
   ) == (
                                           ((float) (
                                            ((
      0.19999999999999996f
     ) - (
      var_1_20
     ))
    ))
   ))
  ))
 ) : (
                                         ((
   var_1_19
  ) == (
                                          ((float) (
    var_1_20
   ))
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
