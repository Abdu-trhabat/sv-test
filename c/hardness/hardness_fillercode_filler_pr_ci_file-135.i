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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch135Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 24.1;
unsigned long int var_1_2 = 10;
unsigned long int var_1_3 = 4;
unsigned long int var_1_4 = 256;
unsigned long int var_1_5 = 4;
double var_1_6 = 0.75;
signed long int var_1_7 = -5;
signed long int var_1_9 = 32;
signed long int var_1_10 = 64;
signed long int var_1_11 = 200;
signed short int var_1_12 = 64;
signed short int var_1_13 = -64;
signed short int var_1_14 = 4;
signed short int var_1_15 = -10;
unsigned char var_1_16 = 0;
signed short int var_1_17 = -1;
signed short int var_1_18 = 256;
signed short int var_1_19 = 10;
double var_1_20 = 0.375;
double var_1_22 = 5.8;
unsigned char var_1_23 = 1;
signed long int var_1_24 = -128;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned long int var_1_28 = 2;
unsigned char var_1_29 = 200;
unsigned char var_1_32 = 128;
unsigned char var_1_33 = 64;
unsigned char var_1_34 = 16;
unsigned long int var_1_35 = 128;
float var_1_36 = 127.5;
float var_1_37 = 4.6;
signed short int var_1_38 = -256;
float var_1_41 = 8.6;
float var_1_42 = 4.5;
float var_1_43 = 9.3;
float var_1_44 = 2.125;
float var_1_45 = 25.5;
float var_1_46 = 31.125;
float var_1_48 = 64.5;
signed long int last_1_var_1_7 = -5;
unsigned long int last_1_var_1_28 = 2;
void initially(void) {
}
void step(void) {
                                           if ( ((last_1_var_1_7) < ( ((var_1_19) / (var_1_24))))) {
                                            if ( ((last_1_var_1_28) > (var_1_18))) {
                                             var_1_23 = (
                                              (! (
                                               ((
      var_1_25
     ) && (
      var_1_26
     ))
    ))
   );
  } else {
                                             var_1_23 = (
    var_1_26
   );
  }
 } else {
                                            var_1_23 = (
   var_1_27
  );
 }
                              if (var_1_23) {
                               var_1_7 = (
                                ((((( ((((( (( var_1_9 ) - ( var_1_10 )) )) > (( var_1_11 ))) ? (( (( var_1_9 ) - ( var_1_10 )) )) : (( var_1_11 )))) )) > (( ((((10) < 0 ) ? -(10) : (10))) ))) ? (( ((((( (( var_1_9 ) - ( var_1_10 )) )) > (( var_1_11 ))) ? (( (( var_1_9 ) - ( var_1_10 )) )) : (( var_1_11 )))) )) : (( ((((10) < 0 ) ? -(10) : (10))) ))))
  );
 } else {
                               var_1_7 = (
   var_1_11
  );
 }
                  if ( ((var_1_5) > ( ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))))) {
                   var_1_29 = (
                    ((
                     ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))
   ) - (
                     (((((( var_1_33 ) - ( var_1_34 ))) < 0 ) ? -((( var_1_33 ) - ( var_1_34 ))) : ((( var_1_33 ) - ( var_1_34 )))))
   ))
  );
 } else {
                   if ( ((var_1_32) > (var_1_33))) {
                    var_1_29 = (
    var_1_33
   );
  }
 }
                   if ( (! ( ((var_1_5) < (var_1_33))))) {
                    if ( (( (~ (var_1_33))) <= (var_1_18))) {
                     var_1_35 = (
    var_1_32
   );
  } else {
                     var_1_35 = (
    var_1_5
   );
  }
 } else {
                    var_1_35 = (
   var_1_34
  );
 }
                   if ( ((var_1_27) || ( ((var_1_1) >= ( ((var_1_37) + (var_1_1))))))) {
                    var_1_38 = (
                     ((
    var_1_32
   ) + (
    var_1_19
   ))
  );
 }
 unsigned char stepLocal_3 = var_1_23;
 unsigned long int stepLocal_2 = 4u;
                                if ( ((stepLocal_2) >= (var_1_4))) {
                                 if ( ((stepLocal_3) && (var_1_16))) {
                                  var_1_28 = (
                                   ((((( var_1_18 )) > (( var_1_10 ))) ? (( var_1_18 )) : (( var_1_10 ))))
   );
  } else {
                                  var_1_28 = (
    var_1_18
   );
  }
 } else {
                                 var_1_28 = (
   var_1_10
  );
 }
 unsigned long int stepLocal_0 = (( ((var_1_3) * (var_1_4))) * (var_1_5));
                              if ( ((var_1_2) > (stepLocal_0))) {
                               var_1_1 = (
                                ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))
  );
 }
 unsigned long int stepLocal_1 = ((var_1_28) | ( ((var_1_28) + (var_1_10))));
                              if ( ((stepLocal_1) >= (var_1_28))) {
                               if (var_1_23) {
                                var_1_12 = (
    var_1_13
   );
  }
 }
                   var_1_36 = (
  var_1_6
 );
                               if (var_1_23) {
                                var_1_14 = (
                                 ((
    4
   ) - (
                                   ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))
   ))
  );
 } else {
                                 if (var_1_23) {
                                  var_1_14 = (
                                   ((((( (( var_1_17 ) - ( var_1_18 )) )) > (( var_1_19 ))) ? (( (( var_1_17 ) - ( var_1_18 )) )) : (( var_1_19 ))))
   );
  } else {
                                  var_1_14 = (
    var_1_18
   );
  }
 }
                   if (var_1_23) {
                    var_1_41 = (
                     ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))
  );
 } else {
                    if ( ((var_1_11) > (var_1_19))) {
                     var_1_41 = (
                      ((
                       ((
      var_1_42
     ) - (
      256.25f
     ))
    ) + (
                       ((((( var_1_43 )) < (( ((((( var_1_44 )) > (( var_1_45 ))) ? (( var_1_44 )) : (( var_1_45 )))) ))) ? (( var_1_43 )) : (( ((((( var_1_44 )) > (( var_1_45 ))) ? (( var_1_44 )) : (( var_1_45 )))) ))))
    ))
   );
  } else {
                     if ( ((var_1_2) > ( ((((((var_1_28) - (var_1_11))) < 0 ) ? -(((var_1_28) - (var_1_11))) : (((var_1_28) - (var_1_11)))))))) {
                      var_1_41 = (
     var_1_22
    );
   }
  }
 }
                                if ( (( (- ( ((var_1_6) * (var_1_1))))) < (var_1_1))) {
                                 var_1_20 = (
                                  ((((( var_1_6 )) < (( var_1_22 ))) ? (( var_1_6 )) : (( var_1_22 ))))
  );
 }
                   if ( ((var_1_43) < ( ((var_1_1) / (var_1_48))))) {
                    if ( (! (var_1_23))) {
                     var_1_46 = (
                      ((((( ((((( var_1_43 )) < (( var_1_45 ))) ? (( var_1_43 )) : (( var_1_45 )))) )) < (( var_1_42 ))) ? (( ((((( var_1_43 )) < (( var_1_45 ))) ? (( var_1_43 )) : (( var_1_45 )))) )) : (( var_1_42 ))))
   );
  }
 } else {
                    var_1_46 = (
   var_1_22
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967295);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 2147483646);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483647);
 assume_abort_if_not(var_1_11 <= 2147483646);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -32767);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= -32766);
 assume_abort_if_not(var_1_15 <= 32766);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= -1);
 assume_abort_if_not(var_1_17 <= 32766);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= -32767);
 assume_abort_if_not(var_1_19 <= 32766);
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= -2147483648);
 assume_abort_if_not(var_1_24 <= 2147483647);
 assume_abort_if_not(var_1_24 != 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 0);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 127);
 assume_abort_if_not(var_1_32 <= 254);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 63);
 assume_abort_if_not(var_1_33 <= 127);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= -461168.6018427383000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= -461168.6018427383000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= -922337.2036854776000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
 assume_abort_if_not(var_1_48 != 0.0F);
}
void updateLastVariables(void) {
 last_1_var_1_7 = var_1_7;
 last_1_var_1_28 = var_1_28;
}
int property(void) {
 if ( ((var_1_2) > ( (( ((var_1_3) * (var_1_4))) * (var_1_5))))) {
 }
 if (var_1_23) {
 } else {
 }
 if ( (( ((var_1_28) | ( ((var_1_28) + (var_1_10))))) >= (var_1_28))) {
  if (var_1_23) {
  }
 }
 if (var_1_23) {
 } else {
  if (var_1_23) {
  } else {
  }
 }
 if ( (( (- ( ((var_1_6) * (var_1_1))))) < (var_1_1))) {
 }
 if ( ((last_1_var_1_7) < ( ((var_1_19) / (var_1_24))))) {
  if ( ((last_1_var_1_28) > (var_1_18))) {
  } else {
  }
 } else {
 }
 if ( ((4u) >= (var_1_4))) {
  if ( ((var_1_23) && (var_1_16))) {
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
       ) > (
                                                ((
                                                 ((
          var_1_3
         ) * (
          var_1_4
         ))
        ) * (
         var_1_5
        ))
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((double) (
                                             ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))
        ))
       ))
      ) : (
       1
      ))
     ) && (
                                          ((
       var_1_23
      ) ? (
                                           ((
        var_1_7
       ) == (
                                            ((signed long int) (
                                             ((((( ((((( (( var_1_9 ) - ( var_1_10 )) )) > (( var_1_11 ))) ? (( (( var_1_9 ) - ( var_1_10 )) )) : (( var_1_11 )))) )) > (( ((((10) < 0 ) ? -(10) : (10))) ))) ? (( ((((( (( var_1_9 ) - ( var_1_10 )) )) > (( var_1_11 ))) ? (( (( var_1_9 ) - ( var_1_10 )) )) : (( var_1_11 )))) )) : (( ((((10) < 0 ) ? -(10) : (10))) ))))
        ))
       ))
      ) : (
                                           ((
        var_1_7
       ) == (
                                            ((signed long int) (
         var_1_11
        ))
       ))
      ))
     ))
    ) && (
                                         ((
                                               ((
                                                ((
        var_1_28
       ) | (
                                                 ((
         var_1_28
        ) + (
         var_1_10
        ))
       ))
      ) >= (
       var_1_28
      ))
     ) ? (
                                          ((
       var_1_23
      ) ? (
                                           ((
        var_1_12
       ) == (
                                            ((signed short int) (
         var_1_13
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
     var_1_23
    ) ? (
                                          ((
      var_1_14
     ) == (
                                           ((signed short int) (
                                            ((
        4
       ) - (
                                             ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_23
     ) ? (
                                           ((
       var_1_14
      ) == (
                                            ((signed short int) (
                                             ((((( (( var_1_17 ) - ( var_1_18 )) )) > (( var_1_19 ))) ? (( (( var_1_17 ) - ( var_1_18 )) )) : (( var_1_19 ))))
       ))
      ))
     ) : (
                                           ((
       var_1_14
      ) == (
                                            ((signed short int) (
        var_1_18
       ))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                (- (
                                                 ((
       var_1_6
      ) * (
       var_1_1
      ))
     ))
    ) < (
     var_1_1
    ))
   ) ? (
                                         ((
     var_1_20
    ) == (
                                          ((double) (
                                           ((((( var_1_6 )) < (( var_1_22 ))) ? (( var_1_6 )) : (( var_1_22 ))))
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                                  ((
                                                         ((
    last_1_var_1_7
   ) < (
                                                          ((
     var_1_19
    ) / (
     var_1_24
    ))
   ))
  ) ? (
                                                   ((
                                                          ((
     last_1_var_1_28
    ) > (
     var_1_18
    ))
   ) ? (
                                                    ((
     var_1_23
    ) == (
                                                     ((unsigned char) (
                                                      (! (
                                                       ((
        var_1_25
       ) && (
        var_1_26
       ))
      ))
     ))
    ))
   ) : (
                                                    ((
     var_1_23
    ) == (
                                                     ((unsigned char) (
      var_1_26
     ))
    ))
   ))
  ) : (
                                                   ((
    var_1_23
   ) == (
                                                    ((unsigned char) (
     var_1_27
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   4u
  ) >= (
   var_1_4
  ))
 ) ? (
                                       ((
                                              ((
    var_1_23
   ) && (
    var_1_16
   ))
  ) ? (
                                        ((
    var_1_28
   ) == (
                                         ((unsigned long int) (
                                          ((((( var_1_18 )) > (( var_1_10 ))) ? (( var_1_18 )) : (( var_1_10 ))))
    ))
   ))
  ) : (
                                        ((
    var_1_28
   ) == (
                                         ((unsigned long int) (
     var_1_18
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_28
  ) == (
                                        ((unsigned long int) (
    var_1_10
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
