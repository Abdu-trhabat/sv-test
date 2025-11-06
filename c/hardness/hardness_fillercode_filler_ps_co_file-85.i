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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch85Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 1000;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
float var_1_7 = 0.6;
unsigned long int var_1_8 = 32;
unsigned long int var_1_9 = 32;
float var_1_11 = 5.5;
unsigned long int var_1_12 = 128;
unsigned char var_1_13 = 16;
unsigned char var_1_14 = 0;
unsigned long int var_1_15 = 8;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
double var_1_18 = 1.8;
double var_1_19 = 4.5;
double var_1_20 = 15.5;
signed char var_1_21 = -5;
signed short int var_1_23 = 256;
signed short int var_1_24 = 5;
signed short int var_1_25 = 16;
signed char var_1_27 = 4;
float var_1_28 = 8.95;
float var_1_29 = 63.75;
signed short int var_1_30 = -256;
unsigned char var_1_31 = 0;
double var_1_32 = 99999999999.2;
double var_1_33 = 31.2;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 1;
signed char var_1_39 = 64;
unsigned char var_1_40 = 10;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
unsigned long int var_1_43 = 0;
unsigned long int last_1_var_1_1 = 1000;
float last_1_var_1_7 = 0.6;
unsigned long int last_1_var_1_12 = 128;
unsigned long int last_1_var_1_15 = 8;
void initially(void) {
}
void step(void) {
                   if (var_1_5) {
                    if ( (( ((var_1_23) - ( (((((var_1_24)) < ((var_1_25))) ? ((var_1_24)) : ((var_1_25))))))) <= (var_1_15))) {
                     var_1_21 = (
    var_1_27
   );
  }
 }
                   var_1_28 = (
  var_1_29
 );
                   var_1_30 = (
                    ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))
 );
                   if ( (( ((((( ((var_1_32) - (var_1_33)))) < ((var_1_29))) ? (( ((var_1_32) - (var_1_33)))) : ((var_1_29))))) > ( ((var_1_18) * (31.3))))) {
                    if (var_1_5) {
                     var_1_31 = (
    var_1_35
   );
  }
 } else {
                    var_1_31 = (
                     ((
    var_1_35
   ) && (
                      ((
                       ((
      var_1_25
     ) > (
      var_1_24
     ))
    ) && (
                       (! (
      var_1_36
     ))
    ))
   ))
  );
 }
                   if ( (( ((var_1_18) / (25.4f))) >= ( ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))))) {
                    var_1_37 = (
                     (! (
                      ((
     var_1_36
    ) || (
     var_1_35
    ))
   ))
  );
 }
                   if ( (! (var_1_16))) {
                    if ( (( ((var_1_12) + (var_1_15))) >= ( (( ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) << (var_1_25))))) {
                     if ( ((var_1_39) == (var_1_25))) {
                      var_1_38 = (
                       ((((( var_1_39 )) > (( var_1_40 ))) ? (( var_1_39 )) : (( var_1_40 ))))
    );
   }
  } else {
                     if ( ((var_1_23) < (var_1_25))) {
                      var_1_38 = (
     var_1_40
    );
   } else {
                      if ( ((var_1_18) < ( ((((((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) < 0 ) ? -(((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) : (((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))))))))) {
                       var_1_38 = (
      4
     );
    } else {
                       var_1_38 = (
      var_1_39
     );
    }
   }
  }
 }
                   var_1_41 = (
  var_1_42
 );
                   var_1_43 = (
  var_1_25
 );
 unsigned long int stepLocal_2 = ((last_1_var_1_12) + (last_1_var_1_1));
                                         if ( ((last_1_var_1_15) <= (stepLocal_2))) {
                                          var_1_5 = (
                                           ((
                                            ((
     last_1_var_1_12
    ) == (
     last_1_var_1_15
    ))
   ) && (
    var_1_6
   ))
  );
 } else {
                                          var_1_5 = (
   var_1_6
  );
 }
                                          if ( ((last_1_var_1_7) <= ( (- ( ((32.8f) + (last_1_var_1_7))))))) {
                                           var_1_12 = (
   last_1_var_1_12
  );
 }
 unsigned char stepLocal_3 = var_1_5;
                                if ( ((stepLocal_3) || (var_1_17))) {
                                 var_1_18 = (
                                  ((
                                   ((
                                    ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))
    ) + (
     var_1_20
    ))
   ) - (
    63.6
   ))
  );
 }
                               var_1_13 = (
                                ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))
 );
                               var_1_16 = (
                                ((
   var_1_6
  ) && (
   var_1_17
  ))
 );
                               if (var_1_5) {
                                var_1_15 = (
                                 ((((( var_1_12 )) > (( (( var_1_13 ) + ( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) )) ))) ? (( var_1_12 )) : (( (( var_1_13 ) + ( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) )) ))))
  );
 }
 unsigned long int stepLocal_1 = var_1_12;
 unsigned long int stepLocal_0 = var_1_12;
                              if ( ((stepLocal_1) < ( (( (- (var_1_15))) * (64))))) {
                               if (var_1_5) {
                                var_1_1 = (
                                 ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))
   );
  } else {
                                if ( ((-10000000) < (stepLocal_0))) {
                                 var_1_1 = (
                                  ((((((((( var_1_15 )) > (( 5u ))) ? (( var_1_15 )) : (( 5u ))))) < 0 ) ? -(((((( var_1_15 )) > (( 5u ))) ? (( var_1_15 )) : (( 5u ))))) : (((((( var_1_15 )) > (( 5u ))) ? (( var_1_15 )) : (( 5u )))))))
    );
   } else {
                                 var_1_1 = (
     50u
    );
   }
  }
 }
                               if ( (( ((var_1_12) + ( ((var_1_12) * (var_1_15))))) <= ( (( ((32u) / (var_1_8))) / (var_1_9))))) {
                                if ( ((1.25f) < (var_1_18))) {
                                 var_1_7 = (
    1000000.1f
   );
  }
 } else {
                                var_1_7 = (
   var_1_11
  );
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 4294967295);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 4294967295);
 assume_abort_if_not(var_1_9 != 0);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 0);
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= -1);
 assume_abort_if_not(var_1_23 <= 32767);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -127);
 assume_abort_if_not(var_1_27 <= 126);
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 127);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 254);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_7 = var_1_7;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_15 = var_1_15;
}
int property(void) {
 if ( ((var_1_12) < ( (( (- (var_1_15))) * (64))))) {
  if (var_1_5) {
  } else {
   if ( ((-10000000) < (var_1_12))) {
   } else {
   }
  }
 }
 if ( ((last_1_var_1_15) <= ( ((last_1_var_1_12) + (last_1_var_1_1))))) {
 } else {
 }
 if ( (( ((var_1_12) + ( ((var_1_12) * (var_1_15))))) <= ( (( ((32u) / (var_1_8))) / (var_1_9))))) {
  if ( ((1.25f) < (var_1_18))) {
  }
 } else {
 }
 if ( ((last_1_var_1_7) <= ( (- ( ((32.8f) + (last_1_var_1_7))))))) {
 }
 if (var_1_5) {
 }
 if ( ((var_1_5) || (var_1_17))) {
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
         var_1_12
        ) < (
                                                 ((
                                                  (- (
           var_1_15
          ))
         ) * (
          64
         ))
        ))
       ) ? (
                                            ((
         var_1_5
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((unsigned long int) (
                                               ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))
          ))
         ))
        ) : (
                                             ((
                                                   ((
           -10000000
          ) < (
           var_1_12
          ))
         ) ? (
                                              ((
           var_1_1
          ) == (
                                               ((unsigned long int) (
                                                ((((((((( var_1_15 )) > (( 5u ))) ? (( var_1_15 )) : (( 5u ))))) < 0 ) ? -(((((( var_1_15 )) > (( 5u ))) ? (( var_1_15 )) : (( 5u ))))) : (((((( var_1_15 )) > (( 5u ))) ? (( var_1_15 )) : (( 5u )))))))
           ))
          ))
         ) : (
                                              ((
           var_1_1
          ) == (
                                               ((unsigned long int) (
            50u
           ))
          ))
         ))
        ))
       ) : (
        1
       ))
      ) && (
                                                      ((
                                                            ((
         last_1_var_1_15
        ) <= (
                                                             ((
          last_1_var_1_12
         ) + (
          last_1_var_1_1
         ))
        ))
       ) ? (
                                                       ((
         var_1_5
        ) == (
                                                        ((unsigned char) (
                                                         ((
                                                          ((
            last_1_var_1_12
           ) == (
            last_1_var_1_15
           ))
          ) && (
           var_1_6
          ))
         ))
        ))
       ) : (
                                                       ((
         var_1_5
        ) == (
                                                        ((unsigned char) (
          var_1_6
         ))
        ))
       ))
      ))
     ) && (
                                           ((
                                                  ((
                                                  ((
         var_1_12
        ) + (
                                                   ((
          var_1_12
         ) * (
          var_1_15
         ))
        ))
       ) <= (
                                                   ((
                                                   ((
          32u
         ) / (
          var_1_8
         ))
        ) / (
         var_1_9
        ))
       ))
      ) ? (
                                            ((
                                                   ((
         1.25f
        ) < (
         var_1_18
        ))
       ) ? (
                                             ((
         var_1_7
        ) == (
                                              ((float) (
          1000000.1f
         ))
        ))
       ) : (
        1
       ))
      ) : (
                                            ((
        var_1_7
       ) == (
                                             ((float) (
         var_1_11
        ))
       ))
      ))
     ))
    ) && (
                                                     ((
                                                            ((
       last_1_var_1_7
      ) <= (
                                                             (- (
                                                              ((
         32.8f
        ) + (
         last_1_var_1_7
        ))
       ))
      ))
     ) ? (
                                                      ((
       var_1_12
      ) == (
                                                       ((unsigned long int) (
        last_1_var_1_12
       ))
      ))
     ) : (
      1
     ))
    ))
   ) && (
                                         ((
     var_1_13
    ) == (
                                          ((unsigned char) (
                                           ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))
     ))
    ))
   ))
  ) && (
                                        ((
    var_1_5
   ) ? (
                                         ((
     var_1_15
    ) == (
                                          ((unsigned long int) (
                                           ((((( var_1_12 )) > (( (( var_1_13 ) + ( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) )) ))) ? (( var_1_12 )) : (( (( var_1_13 ) + ( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) )) ))))
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
                                        ((unsigned char) (
                                         ((
     var_1_6
    ) && (
     var_1_17
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_5
  ) || (
   var_1_17
  ))
 ) ? (
                                       ((
   var_1_18
  ) == (
                                        ((double) (
                                         ((
                                          ((
                                           ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))
     ) + (
      var_1_20
     ))
    ) - (
     63.6
    ))
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
