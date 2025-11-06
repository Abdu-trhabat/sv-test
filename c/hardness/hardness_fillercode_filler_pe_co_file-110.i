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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch110Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -1;
signed long int var_1_2 = 1;
signed long int var_1_3 = -10;
signed long int var_1_4 = -1000;
signed long int var_1_5 = -16;
signed char var_1_6 = 1;
signed char var_1_7 = 4;
signed char var_1_8 = 64;
signed char var_1_9 = 4;
signed long int var_1_10 = 10;
signed long int var_1_11 = 10;
signed long int var_1_12 = -1;
signed char var_1_14 = 1;
signed short int var_1_16 = 1;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
double var_1_20 = 16.5;
double var_1_21 = 1.075;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
double var_1_26 = 10.6;
signed char var_1_28 = 1;
unsigned char var_1_29 = 1;
double var_1_32 = 4.6;
double var_1_33 = 1.75;
double var_1_34 = 256.4;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 2;
unsigned short int var_1_38 = 64073;
unsigned char var_1_39 = 0;
double var_1_40 = 0.4;
unsigned short int var_1_41 = 5;
signed char var_1_42 = -32;
signed long int last_1_var_1_11 = 10;
void initially(void) {
}
void step(void) {
                                           if ( ((var_1_5) < ( ((var_1_8) - (var_1_9))))) {
                                            if ( ((last_1_var_1_11) >= (var_1_6))) {
                                             var_1_10 = (
    128
   );
  }
 }
                               if ( ((var_1_2) != ( (( (((((var_1_3)) < ((var_1_4))) ? ((var_1_3)) : ((var_1_4))))) / (var_1_5))))) {
                                var_1_1 = (
                                 ((((( (( var_1_6 ) + ( 25 )) )) > (( var_1_7 ))) ? (( (( var_1_6 ) + ( 25 )) )) : (( var_1_7 ))))
  );
 } else {
                                var_1_1 = (
                                 ((
                                  ((
     var_1_8
    ) - (
                                   ((
      var_1_9
     ) + (
      2
     ))
    ))
   ) - (
    10
   ))
  );
 }
                                var_1_20 = (
                                 ((((( var_1_21 )) < (( 8.25 ))) ? (( var_1_21 )) : (( 8.25 ))))
 );
                                if ( (( ((var_1_8) == (var_1_6))) && (var_1_19))) {
                                 var_1_22 = (
                                  ((
                                   ((
     var_1_23
    ) || (
     var_1_24
    ))
   ) || (
    var_1_25
   ))
  );
 } else {
                                 var_1_22 = (
   var_1_25
  );
 }
                                if (var_1_22) {
                                 var_1_17 = (
                                  ((
    var_1_18
   ) && (
    var_1_19
   ))
  );
 }
                                if ( (( (- ( ((last_1_var_1_11) + (var_1_10))))) != ( (( (((((var_1_9)) < ((var_1_5))) ? ((var_1_9)) : ((var_1_5))))) * ( ((var_1_12) / (var_1_8))))))) {
                                 if (var_1_22) {
                                  var_1_11 = (
    var_1_7
   );
  } else {
                                  var_1_11 = (
    var_1_6
   );
  }
 } else {
                                 var_1_11 = (
   var_1_7
  );
 }
 signed long int stepLocal_1 = var_1_11;
 signed long int stepLocal_0 = (( ((var_1_8) >> (var_1_16))) + (var_1_6));
                                if ( (( ((var_1_8) - (var_1_9))) < (stepLocal_1))) {
                                 if ( (( (((((var_1_7)) > (( ((var_1_5) ^ (var_1_10))))) ? ((var_1_7)) : (( ((var_1_5) ^ (var_1_10))))))) <= (stepLocal_0))) {
                                  var_1_14 = (
    var_1_7
   );
  } else {
                                  var_1_14 = (
    32
   );
  }
 }
                   if ( (( ((var_1_11) / (var_1_28))) > (var_1_10))) {
                    if ( (( ((var_1_28) < (var_1_10))) && ( ((var_1_11) == (var_1_10))))) {
                     if ( ((var_1_11) > (var_1_28))) {
                      if (var_1_29) {
                      var_1_26 = (
      var_1_32
     );
    } else {
                       var_1_26 = (
                        ((((0.19999999999999996) < 0 ) ? -(0.19999999999999996) : (0.19999999999999996)))
     );
    }
   } else {
                      var_1_26 = (
                       ((((( ((((( var_1_32 )) > (( (( var_1_33 ) - ( 1.0000000000002E12 )) ))) ? (( var_1_32 )) : (( (( var_1_33 ) - ( 1.0000000000002E12 )) )))) )) < (( var_1_34 ))) ? (( ((((( var_1_32 )) > (( (( var_1_33 ) - ( 1.0000000000002E12 )) ))) ? (( var_1_32 )) : (( (( var_1_33 ) - ( 1.0000000000002E12 )) )))) )) : (( var_1_34 ))))
    );
   }
  }
 } else {
                    if (var_1_17) {
                     var_1_26 = (
    var_1_33
   );
  }
 }
                   if ( ((var_1_32) >= (var_1_33))) {
                    var_1_36 = (
                     ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))
  );
 }
                   if ( (( (( ((var_1_38) - (var_1_11))) - ( (((((var_1_10)) > ((var_1_28))) ? ((var_1_10)) : ((var_1_28))))))) < (var_1_10))) {
                    var_1_37 = (
                     ((
    var_1_28
   ) + (
    var_1_39
   ))
  );
 } else {
                    var_1_37 = (
                     ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))
  );
 }
                   var_1_40 = (
  var_1_34
 );
                   if ( ((var_1_10) > (var_1_38))) {
                    if ( ((var_1_34) > (var_1_32))) {
                     var_1_41 = (
                      ((
     var_1_10
    ) + (
     var_1_11
    ))
   );
  } else {
                     var_1_41 = (
                      ((
                       ((
      var_1_10
     ) + (
                        ((((( var_1_11 )) > (( 10 ))) ? (( var_1_11 )) : (( 10 ))))
     ))
    ) + (
                       ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))
    ))
   );
  }
 }
                   if ( (! ( ((var_1_28) <= (var_1_10))))) {
                    var_1_42 = (
                     ((((( ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) )) > (( 2 ))) ? (( ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28))) )) : (( 2 ))))
  );
 } else {
                    var_1_42 = (
   var_1_28
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -63);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -127);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= 62);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 32);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -2147483648);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 6);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 7);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 1);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -922337.2036854766000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_38 >= 49151);
 assume_abort_if_not(var_1_38 <= 65535);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 127);
}
void updateLastVariables(void) {
 last_1_var_1_11 = var_1_11;
}
int property(void) {
 if ( ((var_1_2) != ( (( (((((var_1_3)) < ((var_1_4))) ? ((var_1_3)) : ((var_1_4))))) / (var_1_5))))) {
 } else {
 }
 if ( ((var_1_5) < ( ((var_1_8) - (var_1_9))))) {
  if ( ((last_1_var_1_11) >= (var_1_6))) {
  }
 }
 if ( (( (- ( ((last_1_var_1_11) + (var_1_10))))) != ( (( (((((var_1_9)) < ((var_1_5))) ? ((var_1_9)) : ((var_1_5))))) * ( ((var_1_12) / (var_1_8))))))) {
  if (var_1_22) {
  } else {
  }
 } else {
 }
 if ( (( ((var_1_8) - (var_1_9))) < (var_1_11))) {
  if ( (( (((((var_1_7)) > (( ((var_1_5) ^ (var_1_10))))) ? ((var_1_7)) : (( ((var_1_5) ^ (var_1_10))))))) <= ( (( ((var_1_8) >> (var_1_16))) + (var_1_6))))) {
  } else {
  }
 }
 if (var_1_22) {
 }
 if ( (( ((var_1_8) == (var_1_6))) && (var_1_19))) {
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
       ) != (
                                                ((
                                                 ((((( var_1_3 )) < (( var_1_4 ))) ? (( var_1_3 )) : (( var_1_4 ))))
        ) / (
         var_1_5
        ))
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((signed char) (
                                             ((((( (( var_1_6 ) + ( 25 )) )) > (( var_1_7 ))) ? (( (( var_1_6 ) + ( 25 )) )) : (( var_1_7 ))))
        ))
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((signed char) (
                                             ((
                                              ((
           var_1_8
          ) - (
                                               ((
            var_1_9
           ) + (
            2
           ))
          ))
         ) - (
          10
         ))
        ))
       ))
      ))
     ) && (
                                                      ((
                                                            ((
        var_1_5
       ) < (
                                                             ((
         var_1_8
        ) - (
         var_1_9
        ))
       ))
      ) ? (
                                                       ((
                                                             ((
         last_1_var_1_11
        ) >= (
         var_1_6
        ))
       ) ? (
                                                        ((
         var_1_10
        ) == (
                                                         ((signed long int) (
          128
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
                                                 (- (
                                                  ((
         last_1_var_1_11
        ) + (
         var_1_10
        ))
       ))
      ) != (
                                                  ((
                                                  ((((( var_1_9 )) < (( var_1_5 ))) ? (( var_1_9 )) : (( var_1_5 ))))
       ) * (
                                                   ((
         var_1_12
        ) / (
         var_1_8
        ))
       ))
      ))
     ) ? (
                                           ((
       var_1_22
      ) ? (
                                            ((
        var_1_11
       ) == (
                                             ((signed long int) (
         var_1_7
        ))
       ))
      ) : (
                                            ((
        var_1_11
       ) == (
                                             ((signed long int) (
         var_1_6
        ))
       ))
      ))
     ) : (
                                           ((
       var_1_11
      ) == (
                                            ((signed long int) (
        var_1_7
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 ((
       var_1_8
      ) - (
       var_1_9
      ))
     ) < (
      var_1_11
     ))
    ) ? (
                                          ((
                                                 ((
                                                  ((((( var_1_7 )) > (( (( var_1_5 ) ^ ( var_1_10 )) ))) ? (( var_1_7 )) : (( (( var_1_5 ) ^ ( var_1_10 )) ))))
      ) <= (
                                                  ((
                                                   ((
         var_1_8
        ) >> (
         var_1_16
        ))
       ) + (
        var_1_6
       ))
      ))
     ) ? (
                                           ((
       var_1_14
      ) == (
                                            ((signed char) (
        var_1_7
       ))
      ))
     ) : (
                                           ((
       var_1_14
      ) == (
                                            ((signed char) (
        32
       ))
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
    var_1_22
   ) ? (
                                         ((
     var_1_17
    ) == (
                                          ((unsigned char) (
                                           ((
       var_1_18
      ) && (
       var_1_19
      ))
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                       ((
   var_1_20
  ) == (
                                        ((double) (
                                         ((((( var_1_21 )) < (( 8.25 ))) ? (( var_1_21 )) : (( 8.25 ))))
   ))
  ))
 ))
) && (
                                       ((
                                              ((
                                               ((
    var_1_8
   ) == (
    var_1_6
   ))
  ) && (
   var_1_19
  ))
 ) ? (
                                        ((
   var_1_22
  ) == (
                                         ((unsigned char) (
                                          ((
                                           ((
      var_1_23
     ) || (
      var_1_24
     ))
    ) || (
     var_1_25
    ))
   ))
  ))
 ) : (
                                        ((
   var_1_22
  ) == (
                                         ((unsigned char) (
    var_1_25
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
