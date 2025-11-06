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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch31Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 2;
unsigned char var_1_3 = 5;
unsigned char var_1_4 = 50;
unsigned char var_1_5 = 64;
unsigned char var_1_6 = 64;
unsigned char var_1_7 = 2;
unsigned char var_1_8 = 8;
unsigned long int var_1_9 = 1;
signed char var_1_10 = 4;
signed char var_1_11 = 50;
signed char var_1_12 = 5;
signed char var_1_13 = 16;
signed char var_1_14 = 5;
signed char var_1_15 = 4;
unsigned char var_1_16 = 128;
unsigned short int var_1_17 = 10;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 1;
float var_1_22 = 8.625;
float var_1_23 = 16.5;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
float var_1_27 = 2.5;
float var_1_28 = 7.7;
signed short int var_1_29 = -256;
signed short int var_1_30 = 100;
signed short int var_1_32 = 64;
unsigned short int var_1_33 = 0;
float var_1_34 = 8.6;
signed short int var_1_35 = 128;
signed long int var_1_36 = 2082478446;
unsigned char var_1_37 = 1;
double var_1_38 = 4.4;
float var_1_40 = 8.75;
float var_1_41 = 1000000000000.75;
float var_1_42 = 9999999999.9;
unsigned char last_1_var_1_8 = 8;
unsigned char last_1_var_1_18 = 0;
void initially(void) {
}
void step(void) {
                                         if ( (( ((last_1_var_1_8) * (var_1_7))) >= (var_1_3))) {
                                          var_1_9 = (
                                           ((
    5u
   ) + (
    var_1_4
   ))
  );
 } else {
                                          if (last_1_var_1_18) {
                                           var_1_9 = (
    var_1_4
   );
  } else {
                                           var_1_9 = (
    last_1_var_1_8
   );
  }
 }
 signed char stepLocal_2 = var_1_12;
                                if ( ((stepLocal_2) <= ( ((var_1_9) / (64))))) {
                                 var_1_18 = (
                                  (! (
    var_1_19
   ))
  );
 } else {
                                 if (var_1_19) {
                                  var_1_18 = (
    var_1_20
   );
  } else {
                                  var_1_18 = (
    0
   );
  }
 }
                   var_1_32 = (
  -128
 );
                              if (var_1_18) {
                               var_1_1 = (
                                ((((( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) > (( var_1_4 ))) ? (( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) : (( var_1_4 ))))
  );
 } else {
                               var_1_1 = (
                                ((
                                 ((
     var_1_5
    ) + (
     var_1_6
    ))
   ) - (
    var_1_7
   ))
  );
 }
                              var_1_8 = (
                               ((((( (( var_1_5 ) + ( (( 64 ) - ( 16 )) )) )) < (( 64 ))) ? (( (( var_1_5 ) + ( (( 64 ) - ( 16 )) )) )) : (( 64 ))))
 );
                  if ( ((var_1_22) <= (var_1_23))) {
                   var_1_21 = (
                    ((
    var_1_24
   ) || (
                     ((
     var_1_25
    ) || (
     var_1_26
    ))
   ))
  );
 } else {
                   var_1_21 = (
   var_1_26
  );
 }
                   if ( (( ((var_1_41) - (var_1_42))) >= ( (((((var_1_38)) < ((var_1_28))) ? ((var_1_38)) : ((var_1_28))))))) {
                    if ( (! ( ((var_1_36) > (var_1_35))))) {
                     var_1_40 = (
    var_1_28
   );
  }
 }
                               if ( (( ((var_1_6) + (var_1_4))) >= (var_1_5))) {
                                 if ( ((var_1_6) > (var_1_9))) {
                                  var_1_10 = (
                                   ((
                                    ((
                                     ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))
     ) + (
                                     ((
       var_1_12
      ) + (
       var_1_13
      ))
     ))
    ) - (
                                    ((((( var_1_14 )) > (( var_1_15 ))) ? (( var_1_14 )) : (( var_1_15 ))))
    ))
   );
  } else {
                                  var_1_10 = (
                                   ((((( ((((( var_1_14 )) < (( var_1_12 ))) ? (( var_1_14 )) : (( var_1_12 )))) )) > (( var_1_15 ))) ? (( ((((( var_1_14 )) < (( var_1_12 ))) ? (( var_1_14 )) : (( var_1_12 )))) )) : (( var_1_15 ))))
   );
  }
 }
                   if ( (( ((var_1_23) < (var_1_34))) || (var_1_20))) {
                    if ( (( ((var_1_9) / ( (((((-10)) < ((var_1_35))) ? ((-10)) : ((var_1_35))))))) >= ( ((var_1_29) * (var_1_36))))) {
                     if (var_1_20) {
                      var_1_33 = (
     var_1_30
    );
   }
  } else {
                     var_1_33 = (
    var_1_30
   );
  }
 }
 signed long int stepLocal_1 = 16;
 unsigned char stepLocal_0 = (( ((-128) | (var_1_12))) >= ( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))));
                                if ( ((stepLocal_0) || (var_1_18))) {
                                 if ( ((var_1_3) <= (stepLocal_1))) {
                                  var_1_16 = (
    var_1_12
   );
  } else {
                                  var_1_16 = (
    var_1_6
   );
  }
 } else {
                                 var_1_16 = (
   var_1_12
  );
 }
                   if ( (! (var_1_20))) {
                   var_1_27 = (
                    ((((( 4.2f )) < (( var_1_28 ))) ? (( 4.2f )) : (( var_1_28 ))))
  );
 } else {
                    if ( ((var_1_22) <= (var_1_23))) {
                     if ( (( (( ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) - (var_1_30))) < (var_1_9))) {
                      if ( ((var_1_9) < (var_1_30))) {
                       var_1_27 = (
      var_1_28
     );
    }
   } else {
                      var_1_27 = (
     var_1_28
    );
   }
  }
 }
                                var_1_17 = (
  var_1_13
 );
                   if ( ((var_1_22) <= ( ((((9.999999999994E11f) < 0 ) ? -(9.999999999994E11f) : (9.999999999994E11f)))))) {
                    if ( (( ((((63.8) < 0 ) ? -(63.8) : (63.8)))) > ( ((var_1_28) / (var_1_38))))) {
                     var_1_37 = (
                      (! (
                       (! (
      var_1_19
     ))
    ))
   );
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 254);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 63);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 64);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -63);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 31);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -922337.2036854766000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -32767);
 assume_abort_if_not(var_1_29 <= 32767);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 32767);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_35 >= -32768);
 assume_abort_if_not(var_1_35 <= 32767);
 assume_abort_if_not(var_1_35 != 0);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= 1073741823);
 assume_abort_if_not(var_1_36 <= 2147483647);
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 assume_abort_if_not(var_1_38 != 0.0F);
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_18 = var_1_18;
}
int property(void) {
 if (var_1_18) {
 } else {
 }
 if ( (( ((last_1_var_1_8) * (var_1_7))) >= (var_1_3))) {
 } else {
  if (last_1_var_1_18) {
  } else {
  }
 }
 if ( (( ((var_1_6) + (var_1_4))) >= (var_1_5))) {
  if ( ((var_1_6) > (var_1_9))) {
  } else {
  }
 }
 if ( (( (( ((-128) | (var_1_12))) >= ( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))) || (var_1_18))) {
  if ( ((var_1_3) <= (16))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_12) <= ( ((var_1_9) / (64))))) {
 } else {
  if (var_1_19) {
  } else {
  }
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                                          ((
       var_1_18
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned char) (
                                             ((((( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) > (( var_1_4 ))) ? (( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) : (( var_1_4 ))))
        ))
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned char) (
                                             ((
                                              ((
           var_1_5
          ) + (
           var_1_6
          ))
         ) - (
          var_1_7
         ))
        ))
       ))
      ))
     ) && (
                                          ((
       var_1_8
      ) == (
                                           ((unsigned char) (
                                            ((((( (( var_1_5 ) + ( (( 64 ) - ( 16 )) )) )) < (( 64 ))) ? (( (( var_1_5 ) + ( (( 64 ) - ( 16 )) )) )) : (( 64 ))))
       ))
      ))
     ))
    ) && (
                                                    ((
                                                          ((
                                                           ((
        last_1_var_1_8
       ) * (
        var_1_7
       ))
      ) >= (
       var_1_3
      ))
     ) ? (
                                                     ((
       var_1_9
      ) == (
                                                      ((unsigned long int) (
                                                       ((
         5u
        ) + (
         var_1_4
        ))
       ))
      ))
     ) : (
                                                     ((
       last_1_var_1_18
      ) ? (
                                                      ((
        var_1_9
       ) == (
                                                       ((unsigned long int) (
         var_1_4
        ))
       ))
      ) : (
                                                      ((
        var_1_9
       ) == (
                                                       ((unsigned long int) (
         last_1_var_1_8
        ))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                              ((
                                               ((
       var_1_6
      ) + (
       var_1_4
      ))
     ) >= (
      var_1_5
     ))
    ) ? (
                                          ((
                                                 ((
       var_1_6
      ) > (
       var_1_9
      ))
     ) ? (
                                           ((
       var_1_10
      ) == (
                                            ((signed char) (
                                             ((
                                              ((
                                               ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))
         ) + (
                                               ((
           var_1_12
          ) + (
           var_1_13
          ))
         ))
        ) - (
                                              ((((( var_1_14 )) > (( var_1_15 ))) ? (( var_1_14 )) : (( var_1_15 ))))
        ))
       ))
      ))
     ) : (
                                           ((
       var_1_10
      ) == (
                                            ((signed char) (
                                             ((((( ((((( var_1_14 )) < (( var_1_12 ))) ? (( var_1_14 )) : (( var_1_12 )))) )) > (( var_1_15 ))) ? (( ((((( var_1_14 )) < (( var_1_12 ))) ? (( var_1_14 )) : (( var_1_12 )))) )) : (( var_1_15 ))))
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
                                                 ((
       -128
      ) | (
       var_1_12
      ))
     ) >= (
                                                 ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))
     ))
    ) || (
     var_1_18
    ))
   ) ? (
                                         ((
                                                ((
      var_1_3
     ) <= (
      16
     ))
    ) ? (
                                          ((
      var_1_16
     ) == (
                                           ((unsigned char) (
       var_1_12
      ))
     ))
    ) : (
                                          ((
      var_1_16
     ) == (
                                           ((unsigned char) (
       var_1_6
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_16
    ) == (
                                          ((unsigned char) (
      var_1_12
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_17
  ) == (
                                        ((unsigned short int) (
    var_1_13
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_12
  ) <= (
                                              ((
    var_1_9
   ) / (
    64
   ))
  ))
 ) ? (
                                       ((
   var_1_18
  ) == (
                                        ((unsigned char) (
                                         (! (
     var_1_19
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_19
  ) ? (
                                        ((
    var_1_18
   ) == (
                                         ((unsigned char) (
     var_1_20
    ))
   ))
  ) : (
                                        ((
    var_1_18
   ) == (
                                         ((unsigned char) (
     0
    ))
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
