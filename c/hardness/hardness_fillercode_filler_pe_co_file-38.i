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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch38Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
double var_1_2 = 128.5;
double var_1_3 = 24.38;
unsigned char var_1_4 = 0;
float var_1_5 = 2.6;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 4;
unsigned short int var_1_9 = 1;
unsigned short int var_1_10 = 128;
signed long int var_1_11 = 100;
signed long int var_1_12 = 8;
unsigned short int var_1_13 = 128;
double var_1_14 = 64.5;
signed short int var_1_15 = 4;
signed long int var_1_16 = -8;
double var_1_17 = 255.5;
double var_1_18 = 0.6;
double var_1_19 = 1000000000000.5;
double var_1_20 = 999999.25;
signed short int var_1_21 = -64;
unsigned char var_1_22 = 1;
signed short int var_1_23 = -1;
signed short int var_1_24 = -64;
signed char var_1_25 = -128;
unsigned char var_1_26 = 32;
double var_1_27 = 128.375;
double var_1_28 = 25.2;
double var_1_29 = 255.5;
unsigned char var_1_30 = 32;
unsigned char var_1_31 = 25;
unsigned char var_1_32 = 128;
double var_1_33 = 499.6;
double var_1_34 = 3.5;
unsigned char var_1_35 = 200;
unsigned short int var_1_36 = 2;
signed long int var_1_37 = -2;
unsigned short int var_1_40 = 36532;
unsigned short int var_1_41 = 32367;
signed char var_1_42 = -2;
signed char var_1_43 = 1;
signed char var_1_44 = 10;
void initially(void) {
}
void step(void) {
                              if ( (( (- (var_1_2))) <= (var_1_3))) {
                               var_1_1 = (
   var_1_4
  );
 } else {
                               if ( ((var_1_5) <= (var_1_2))) {
                                var_1_1 = (
    var_1_6
   );
  } else {
                                var_1_1 = (
    var_1_4
   );
  }
 }
 signed long int stepLocal_1 = (( (((((-1)) > ((var_1_11))) ? ((-1)) : ((var_1_11))))) - (var_1_12));
 signed long int stepLocal_0 = var_1_12;
                               if ( (( ((var_1_9) * (var_1_10))) < (stepLocal_1))) {
                                if ( (( ((var_1_9) + (var_1_10))) < (stepLocal_0))) {
                                 var_1_8 = (
    var_1_13
   );
  }
 } else {
                                var_1_8 = (
   var_1_13
  );
 }
                               if ( (( ((8) / (var_1_15))) < ( ((64) / (var_1_16))))) {
                                if ( ((var_1_12) >= (var_1_15))) {
                                 var_1_14 = (
                                  ((
     var_1_17
    ) - (
     var_1_18
    ))
   );
  } else {
                                 var_1_14 = (
                                  ((
     var_1_18
    ) - (
                                   ((
      64.25
     ) + (
                                    ((((( var_1_19 )) > (( var_1_20 ))) ? (( var_1_19 )) : (( var_1_20 ))))
     ))
    ))
   );
  }
 } else {
                                var_1_14 = (
   var_1_18
  );
 }
                               if ( (( ((var_1_8) + (4u))) <= ( ((var_1_8) >> (var_1_22))))) {
                                var_1_21 = (
                                 ((((( (( var_1_22 ) + ( var_1_23 )) )) < (( var_1_24 ))) ? (( (( var_1_22 ) + ( var_1_23 )) )) : (( var_1_24 ))))
  );
 } else {
                                var_1_21 = (
   var_1_24
  );
 }
                               if ( (! ( ((var_1_21) > (var_1_12))))) {
                                if (var_1_4) {
                                 var_1_25 = (
    var_1_22
   );
  }
 }
                              if ( ((var_1_14) < ( (((((var_1_14)) > (( ((128.5) * (var_1_14))))) ? ((var_1_14)) : (( ((128.5) * (var_1_14))))))))) {
                               var_1_7 = (
                                ((
    var_1_1
   ) && (
                                 (! (
     1
    ))
   ))
  );
 }
                  if ( ((var_1_27) >= ( (((((((((var_1_29)) > ((var_1_28))) ? ((var_1_29)) : ((var_1_28))))) < 0 ) ? -((((((var_1_29)) > ((var_1_28))) ? ((var_1_29)) : ((var_1_28))))) : ((((((var_1_29)) > ((var_1_28))) ? ((var_1_29)) : ((var_1_28)))))))))) {
                   if ( ((var_1_28) <= (var_1_29))) {
                    var_1_26 = (
                     ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))
   );
  } else {
                    var_1_26 = (
    50
   );
  }
 } else {
                   var_1_26 = (
   var_1_31
  );
 }
                  if ( ((var_1_29) >= ( (((((var_1_28)) < ((var_1_27))) ? ((var_1_28)) : ((var_1_27))))))) {
                   var_1_32 = (
                    ((((( var_1_30 )) < (( var_1_31 ))) ? (( var_1_30 )) : (( var_1_31 ))))
  );
 }
                  var_1_33 = (
  var_1_34
 );
                   if ( ((var_1_14) >= (var_1_34))) {
                    if ( ((-16) > (var_1_30))) {
                     var_1_35 = (
    16
   );
  }
 }
                   if ( ((-2) > ( (( ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) | ( ((-10) * (var_1_37))))))) {
                    var_1_36 = (
                     ((((( ((((( 25 )) < (( var_1_8 ))) ? (( 25 )) : (( var_1_8 )))) )) > (( (((((( var_1_31 ) + ( var_1_8 ))) < 0 ) ? -((( var_1_31 ) + ( var_1_8 ))) : ((( var_1_31 ) + ( var_1_8 ))))) ))) ? (( ((((( 25 )) < (( var_1_8 ))) ? (( 25 )) : (( var_1_8 )))) )) : (( (((((( var_1_31 ) + ( var_1_8 ))) < 0 ) ? -((( var_1_31 ) + ( var_1_8 ))) : ((( var_1_31 ) + ( var_1_8 ))))) ))))
  );
 } else {
                    if ( (( ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) <= ( ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))))) {
                     if ( (( ((var_1_37) * ( (((((var_1_21)) > ((var_1_8))) ? ((var_1_21)) : ((var_1_8))))))) <= (var_1_8))) {
                      var_1_36 = (
                       ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))
    );
   }
  } else {
                     var_1_36 = (
                      ((
     var_1_40
    ) - (
                       ((
      var_1_41
     ) - (
      var_1_31
     ))
    ))
   );
  }
 }
                   if ( ((var_1_40) > (var_1_30))) {
                    if ( ((var_1_31) >= ( ((var_1_41) << ( ((((1) < 0 ) ? -(1) : (1)))))))) {
                     var_1_42 = (
    var_1_43
   );
  } else {
                     var_1_42 = (
    var_1_44
   );
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65535);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 65535);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 2147483647);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -32768);
 assume_abort_if_not(var_1_15 <= 32767);
 assume_abort_if_not(var_1_15 != 0);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483648);
 assume_abort_if_not(var_1_16 <= 2147483647);
 assume_abort_if_not(var_1_16 != 0);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 1);
 assume_abort_if_not(var_1_22 <= 15);
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= -16383);
 assume_abort_if_not(var_1_23 <= 16383);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= -32767);
 assume_abort_if_not(var_1_24 <= 32766);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 254);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 254);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -922337.2036854766000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_37 >= -2147483648);
 assume_abort_if_not(var_1_37 <= 2147483647);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 32767);
 assume_abort_if_not(var_1_40 <= 65534);
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 16383);
 assume_abort_if_not(var_1_41 <= 32767);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= -127);
 assume_abort_if_not(var_1_43 <= 126);
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= -127);
 assume_abort_if_not(var_1_44 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( (( (- (var_1_2))) <= (var_1_3))) {
 } else {
  if ( ((var_1_5) <= (var_1_2))) {
  } else {
  }
 }
 if ( ((var_1_14) < ( (((((var_1_14)) > (( ((128.5) * (var_1_14))))) ? ((var_1_14)) : (( ((128.5) * (var_1_14))))))))) {
 }
 if ( (( ((var_1_9) * (var_1_10))) < ( (( (((((-1)) > ((var_1_11))) ? ((-1)) : ((var_1_11))))) - (var_1_12))))) {
  if ( (( ((var_1_9) + (var_1_10))) < (var_1_12))) {
  }
 } else {
 }
 if ( (( ((8) / (var_1_15))) < ( ((64) / (var_1_16))))) {
  if ( ((var_1_12) >= (var_1_15))) {
  } else {
  }
 } else {
 }
 if ( (( ((var_1_8) + (4u))) <= ( ((var_1_8) >> (var_1_22))))) {
 } else {
 }
 if ( (! ( ((var_1_21) > (var_1_12))))) {
  if (var_1_4) {
  }
 }
 return ((
             ((
              ((
               ((
                ((
                                        ((
                                             ((
                                               (- (
        var_1_2
       ))
      ) <= (
       var_1_3
      ))
     ) ? (
                                          ((
       var_1_1
      ) == (
                                           ((unsigned char) (
        var_1_4
       ))
      ))
     ) : (
                                          ((
                                                ((
        var_1_5
       ) <= (
        var_1_2
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned char) (
         var_1_6
        ))
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned char) (
         var_1_4
        ))
       ))
      ))
     ))
    ) && (
                                         ((
                                               ((
       var_1_14
      ) < (
                                                ((((( var_1_14 )) > (( (( 128.5 ) * ( var_1_14 )) ))) ? (( var_1_14 )) : (( (( 128.5 ) * ( var_1_14 )) ))))
      ))
     ) ? (
                                          ((
       var_1_7
      ) == (
                                           ((unsigned char) (
                                            ((
         var_1_1
        ) && (
                                             (! (
          1
         ))
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
                                               ((
       var_1_9
      ) * (
       var_1_10
      ))
     ) < (
                                                ((
                                                 ((((( -1 )) > (( var_1_11 ))) ? (( -1 )) : (( var_1_11 ))))
      ) - (
       var_1_12
      ))
     ))
    ) ? (
                                          ((
                                                 ((
                                                  ((
        var_1_9
       ) + (
        var_1_10
       ))
      ) < (
       var_1_12
      ))
     ) ? (
                                           ((
       var_1_8
      ) == (
                                            ((unsigned short int) (
        var_1_13
       ))
      ))
     ) : (
      1
     ))
    ) : (
                                          ((
      var_1_8
     ) == (
                                           ((unsigned short int) (
       var_1_13
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                ((
      8
     ) / (
      var_1_15
     ))
    ) < (
                                                ((
      64
     ) / (
      var_1_16
     ))
    ))
   ) ? (
                                         ((
                                                ((
      var_1_12
     ) >= (
      var_1_15
     ))
    ) ? (
                                          ((
      var_1_14
     ) == (
                                           ((double) (
                                            ((
        var_1_17
       ) - (
        var_1_18
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_14
     ) == (
                                           ((double) (
                                            ((
        var_1_18
       ) - (
                                             ((
         64.25
        ) + (
                                              ((((( var_1_19 )) > (( var_1_20 ))) ? (( var_1_19 )) : (( var_1_20 ))))
        ))
       ))
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_14
    ) == (
                                          ((double) (
      var_1_18
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
                                               ((
     var_1_8
    ) + (
     4u
    ))
   ) <= (
                                               ((
     var_1_8
    ) >> (
     var_1_22
    ))
   ))
  ) ? (
                                        ((
    var_1_21
   ) == (
                                         ((signed short int) (
                                          ((((( (( var_1_22 ) + ( var_1_23 )) )) < (( var_1_24 ))) ? (( (( var_1_22 ) + ( var_1_23 )) )) : (( var_1_24 ))))
    ))
   ))
  ) : (
                                        ((
    var_1_21
   ) == (
                                         ((signed short int) (
     var_1_24
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             (! (
                                              ((
    var_1_21
   ) > (
    var_1_12
   ))
  ))
 ) ? (
                                       ((
   var_1_4
  ) ? (
                                        ((
    var_1_25
   ) == (
                                         ((signed char) (
     var_1_22
    ))
   ))
  ) : (
   1
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
