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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch146Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -4;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
float var_1_4 = 24.4;
float var_1_5 = 5.7;
signed char var_1_6 = 8;
signed char var_1_7 = 0;
float var_1_8 = 2.75;
float var_1_9 = 5.175;
float var_1_10 = 31.5;
float var_1_11 = 128.5;
float var_1_12 = 63.5;
float var_1_13 = 1.75;
unsigned short int var_1_14 = 0;
signed char var_1_15 = -8;
signed short int var_1_16 = 32;
unsigned short int var_1_17 = 8;
float var_1_18 = 99999999999.8;
signed char var_1_19 = 4;
unsigned short int var_1_20 = 56502;
unsigned short int var_1_21 = 128;
float var_1_22 = 7.25;
float var_1_23 = 50.8;
unsigned short int var_1_24 = 32;
unsigned short int var_1_25 = 16;
unsigned short int var_1_26 = 5;
unsigned short int var_1_29 = 0;
unsigned short int var_1_30 = 10;
unsigned long int var_1_31 = 25;
signed char var_1_32 = -64;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 4;
unsigned char var_1_38 = 8;
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 8;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 16;
unsigned char var_1_43 = 64;
signed char var_1_44 = -1;
unsigned char var_1_45 = 1;
signed char var_1_46 = 4;
signed char var_1_47 = 0;
signed char var_1_48 = 16;
signed char var_1_49 = 4;
signed char var_1_50 = -1;
float last_1_var_1_18 = 99999999999.8;
unsigned short int last_1_var_1_24 = 32;
void initially(void) {
}
void step(void) {
                                           if (var_1_3) {
                                           var_1_8 = (
                                            ((
    var_1_9
   ) + (
    var_1_10
   ))
  );
 } else {
                                            if ( ((last_1_var_1_18) <= ( (( ((var_1_10) / (var_1_11))) / ( (((((var_1_12)) > ((var_1_13))) ? ((var_1_12)) : ((var_1_13))))))))) {
                                             var_1_8 = (
    var_1_9
   );
  }
 }
                                if ( (( (- (var_1_8))) > (var_1_8))) {
                                 var_1_14 = (
   5
  );
 }
 unsigned char stepLocal_0 = var_1_3;
                               if ( ((var_1_2) && (stepLocal_0))) {
                                if ( ((var_1_4) >= (var_1_5))) {
                                 var_1_1 = (
    var_1_6
   );
  } else {
                                 var_1_1 = (
    var_1_7
   );
  }
 }
 unsigned short int stepLocal_1 = var_1_14;
                                if ( ((last_1_var_1_24) < (stepLocal_1))) {
                                 var_1_24 = (
                                  ((((( 100 )) < (( ((((( 32 )) > (( var_1_21 ))) ? (( 32 )) : (( var_1_21 )))) ))) ? (( 100 )) : (( ((((( 32 )) > (( var_1_21 ))) ? (( 32 )) : (( var_1_21 )))) ))))
  );
 }
                                var_1_25 = (
  var_1_21
 );
                                if (var_1_2) {
                                 var_1_18 = (
                                  ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))
  );
 } else {
                                 if ( ((var_1_7) <= ( ((var_1_25) * ( ((var_1_25) / (var_1_19))))))) {
                                  if ( ((var_1_25) < ( ((var_1_14) / ( ((var_1_20) - (var_1_21))))))) {
                                   var_1_18 = (
     var_1_9
    );
   }
  } else {
                                  var_1_18 = (
                                   ((
     var_1_22
    ) - (
     var_1_23
    ))
   );
  }
 }
                                if ( (( (( (((((var_1_10)) < ((var_1_12))) ? ((var_1_10)) : ((var_1_12))))) <= (var_1_18))) && (var_1_2))) {
                                 var_1_15 = (
   var_1_7
  );
 } else {
                                 var_1_15 = (
   var_1_6
  );
 }
                                if ( ((var_1_12) < (var_1_9))) {
                                 if ( ((var_1_14) <= (var_1_17))) {
                                  var_1_16 = (
    var_1_15
   );
  }
 }
                  if ( ((var_1_14) <= (var_1_25))) {
                   var_1_26 = (
                    ((((( var_1_29 )) < (( var_1_30 ))) ? (( var_1_29 )) : (( var_1_30 ))))
  );
 }
                   if ( ((var_1_30) >= (var_1_29))) {
                   if ( ((var_1_16) >= ( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))) {
                    var_1_31 = (
                     (((((( var_1_24 ) + ( var_1_29 ))) < 0 ) ? -((( var_1_24 ) + ( var_1_29 ))) : ((( var_1_24 ) + ( var_1_29 )))))
   );
  }
 }
                   if (var_1_34) {
                    if ( (( (~ (var_1_25))) >= (var_1_30))) {
                     var_1_33 = (
    var_1_36
   );
  }
 }
                   var_1_37 = (
  var_1_38
 );
                   if (var_1_34) {
                    if ( (! (var_1_33))) {
                     var_1_39 = (
                      ((
     var_1_40
    ) + (
     var_1_41
    ))
   );
  } else {
                     var_1_39 = (
                      ((((( (( var_1_40 ) + ( ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) )) )) < (( ((((( var_1_38 )) < (( ((((( var_1_42 )) > (( var_1_43 ))) ? (( var_1_42 )) : (( var_1_43 )))) ))) ? (( var_1_38 )) : (( ((((( var_1_42 )) > (( var_1_43 ))) ? (( var_1_42 )) : (( var_1_43 )))) )))) ))) ? (( (( var_1_40 ) + ( ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) )) )) : (( ((((( var_1_38 )) < (( ((((( var_1_42 )) > (( var_1_43 ))) ? (( var_1_42 )) : (( var_1_43 )))) ))) ? (( var_1_38 )) : (( ((((( var_1_42 )) > (( var_1_43 ))) ? (( var_1_42 )) : (( var_1_43 )))) )))) ))))
   );
  }
 }
                   if ( ((var_1_14) < (var_1_38))) {
                    var_1_44 = (
   var_1_46
  );
 } else {
                    var_1_44 = (
                     ((
                      ((((( ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))) )) < (( var_1_48 ))) ? (( ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47))) )) : (( var_1_48 ))))
   ) - (
    var_1_49
   ))
  );
 }
                   if (var_1_34) {
                    if ( ((var_1_45) < (var_1_14))) {
                     if ( ((var_1_38) != ( (((((var_1_31)) < ((var_1_16))) ? ((var_1_31)) : ((var_1_16))))))) {
                      var_1_50 = (
                       ((((( var_1_46 )) < (( ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) ))) ? (( var_1_46 )) : (( ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))) ))))
    );
   } else {
                      var_1_50 = (
     var_1_48
    );
   }
  }
 } else {
                    if (var_1_33) {
                     if (var_1_36) {
                      var_1_50 = (
     var_1_47
    );
   } else {
                      var_1_50 = (
     var_1_46
    );
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -127);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -127);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 assume_abort_if_not(var_1_11 != 0.0F);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 assume_abort_if_not(var_1_12 != 0.0F);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 65535);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -128);
 assume_abort_if_not(var_1_19 <= 127);
 assume_abort_if_not(var_1_19 != 0);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 32767);
 assume_abort_if_not(var_1_20 <= 65535);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 32766);
 assume_abort_if_not(var_1_21 != 32767);
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 65534);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 65534);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -127);
 assume_abort_if_not(var_1_32 <= 127);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 254);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 127);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 127);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 254);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 254);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 255);
 assume_abort_if_not(var_1_45 != 0);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= -127);
 assume_abort_if_not(var_1_46 <= 126);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= -126);
 assume_abort_if_not(var_1_47 <= 126);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= -1);
 assume_abort_if_not(var_1_48 <= 126);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_18 = var_1_18;
 last_1_var_1_24 = var_1_24;
}
int property(void) {
 if ( ((var_1_2) && (var_1_3))) {
  if ( ((var_1_4) >= (var_1_5))) {
  } else {
  }
 }
 if (var_1_3) {
 } else {
  if ( ((last_1_var_1_18) <= ( (( ((var_1_10) / (var_1_11))) / ( (((((var_1_12)) > ((var_1_13))) ? ((var_1_12)) : ((var_1_13))))))))) {
  }
 }
 if ( (( (- (var_1_8))) > (var_1_8))) {
 }
 if ( (( (( (((((var_1_10)) < ((var_1_12))) ? ((var_1_10)) : ((var_1_12))))) <= (var_1_18))) && (var_1_2))) {
 } else {
 }
 if ( ((var_1_12) < (var_1_9))) {
  if ( ((var_1_14) <= (var_1_17))) {
  }
 }
 if (var_1_2) {
 } else {
  if ( ((var_1_7) <= ( ((var_1_25) * ( ((var_1_25) / (var_1_19))))))) {
   if ( ((var_1_25) < ( ((var_1_14) / ( ((var_1_20) - (var_1_21))))))) {
   }
  } else {
  }
 }
 if ( ((last_1_var_1_24) < (var_1_14))) {
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
         var_1_2
        ) && (
         var_1_3
        ))
       ) ? (
                                            ((
                                                  ((
          var_1_4
         ) >= (
          var_1_5
         ))
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((signed char) (
           var_1_6
          ))
         ))
        ) : (
                                             ((
          var_1_1
         ) == (
                                              ((signed char) (
           var_1_7
          ))
         ))
        ))
       ) : (
        1
       ))
      ) && (
                                                       ((
        var_1_3
       ) ? (
                                                        ((
         var_1_8
        ) == (
                                                         ((float) (
                                                          ((
           var_1_9
          ) + (
           var_1_10
          ))
         ))
        ))
       ) : (
                                                        ((
                                                              ((
          last_1_var_1_18
         ) <= (
                                                               ((
                                                                ((
            var_1_10
           ) / (
            var_1_11
           ))
          ) / (
                                                                ((((( var_1_12 )) > (( var_1_13 ))) ? (( var_1_12 )) : (( var_1_13 ))))
          ))
         ))
        ) ? (
                                                         ((
          var_1_8
         ) == (
                                                          ((float) (
           var_1_9
          ))
         ))
        ) : (
         1
        ))
       ))
      ))
     ) && (
                                           ((
                                                ((
                                                 (- (
         var_1_8
        ))
       ) > (
        var_1_8
       ))
      ) ? (
                                            ((
        var_1_14
       ) == (
                                             ((unsigned short int) (
         5
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
                                                   ((((( var_1_10 )) < (( var_1_12 ))) ? (( var_1_10 )) : (( var_1_12 ))))
       ) <= (
        var_1_18
       ))
      ) && (
       var_1_2
      ))
     ) ? (
                                           ((
       var_1_15
      ) == (
                                            ((signed char) (
        var_1_7
       ))
      ))
     ) : (
                                           ((
       var_1_15
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
      var_1_12
     ) < (
      var_1_9
     ))
    ) ? (
                                          ((
                                                 ((
       var_1_14
      ) <= (
       var_1_17
      ))
     ) ? (
                                           ((
       var_1_16
      ) == (
                                            ((signed short int) (
        var_1_15
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
    var_1_2
   ) ? (
                                         ((
     var_1_18
    ) == (
                                          ((float) (
                                           ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))
     ))
    ))
   ) : (
                                         ((
                                                ((
      var_1_7
     ) <= (
                                                 ((
       var_1_25
      ) * (
                                                  ((
        var_1_25
       ) / (
        var_1_19
       ))
      ))
     ))
    ) ? (
                                          ((
                                                 ((
       var_1_25
      ) < (
                                                  ((
        var_1_14
       ) / (
                                                   ((
         var_1_20
        ) - (
         var_1_21
        ))
       ))
      ))
     ) ? (
                                           ((
       var_1_18
      ) == (
                                            ((float) (
        var_1_9
       ))
      ))
     ) : (
      1
     ))
    ) : (
                                          ((
      var_1_18
     ) == (
                                           ((float) (
                                            ((
        var_1_22
       ) - (
        var_1_23
       ))
      ))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
    last_1_var_1_24
   ) < (
    var_1_14
   ))
  ) ? (
                                        ((
    var_1_24
   ) == (
                                         ((unsigned short int) (
                                          ((((( 100 )) < (( ((((( 32 )) > (( var_1_21 ))) ? (( 32 )) : (( var_1_21 )))) ))) ? (( 100 )) : (( ((((( 32 )) > (( var_1_21 ))) ? (( 32 )) : (( var_1_21 )))) ))))
    ))
   ))
  ) : (
   1
  ))
 ))
) && (
                                        ((
  var_1_25
 ) == (
                                         ((unsigned short int) (
   var_1_21
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
