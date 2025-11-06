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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch23Filler_PS_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
float var_1_4 = 1.4;
double var_1_5 = 3.6;
double var_1_6 = 10.6;
float var_1_7 = 9.25;
float var_1_8 = 1.2;
float var_1_9 = 0.0;
float var_1_10 = 3.1;
float var_1_11 = 500.5;
signed long int var_1_12 = 0;
unsigned char var_1_13 = 10;
unsigned char var_1_14 = 8;
signed long int var_1_16 = -25;
unsigned char var_1_17 = 64;
unsigned long int var_1_18 = 25;
signed char var_1_19 = -100;
signed short int var_1_20 = -4;
unsigned short int var_1_21 = 200;
unsigned short int var_1_22 = 54878;
signed long int var_1_23 = 128;
double var_1_24 = 9999.8;
float var_1_25 = 7.4;
signed char var_1_26 = 100;
double var_1_27 = 128.6;
unsigned long int var_1_28 = 500;
unsigned long int var_1_29 = 4;
unsigned long int var_1_30 = 8;
double var_1_31 = 1.4;
unsigned char var_1_36 = 32;
float var_1_37 = 0.42500000000000004;
float var_1_38 = 10000000.6;
unsigned char var_1_39 = 64;
unsigned char var_1_40 = 16;
unsigned short int var_1_42 = 8;
signed char var_1_43 = -16;
double var_1_44 = 127.625;
unsigned char var_1_46 = 128;
unsigned short int var_1_47 = 64;
signed char var_1_49 = 0;
void initially(void) {
}
void step(void) {
                  if ( ((var_1_27) < (256.5))) {
                   if ( (( (( (((((var_1_28)) > ((var_1_29))) ? ((var_1_28)) : ((var_1_29))))) > (var_1_30))) && ( ((var_1_27) < (var_1_31))))) {
                    var_1_26 = (
                     ((((( var_1_17 )) > (( var_1_13 ))) ? (( var_1_17 )) : (( var_1_13 ))))
   );
  } else {
                    if ( (( ((var_1_30) < (var_1_29))) && (var_1_2))) {
                     var_1_26 = (
     var_1_17
    );
   } else {
                     var_1_26 = (
                      ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))
    );
   }
  }
 }
                   if ( (( ((var_1_37) - (var_1_38))) > (var_1_6))) {
                   var_1_36 = (
                    ((
                     ((
     var_1_39
    ) - (
     var_1_40
    ))
   ) + (
    var_1_14
   ))
  );
 } else {
                    var_1_36 = (
   var_1_40
  );
 }
                   if (var_1_2) {
                    var_1_42 = (
   256
  );
 }
                   if ( (( (( (((((var_1_5)) > ((var_1_11))) ? ((var_1_5)) : ((var_1_11))))) / (var_1_44))) > ( (((((var_1_6)) < ((var_1_10))) ? ((var_1_6)) : ((var_1_10))))))) {
                    if ( (( ((-5) < (var_1_13))) && (var_1_2))) {
                     if ( ((var_1_13) >= (var_1_39))) {
                      var_1_43 = (
                       ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))
    );
   } else {
                      var_1_43 = (
     var_1_17
    );
   }
  }
 }
                   var_1_46 = (
  var_1_40
 );
                   if ( ((var_1_17) < ( (((((var_1_40)) > ((var_1_17))) ? ((var_1_40)) : ((var_1_17))))))) {
                    if ( ((var_1_2) || ( ((128.5) <= (var_1_6))))) {
                     var_1_47 = (
                      ((
     var_1_22
    ) - (
     var_1_39
    ))
   );
  }
 } else {
                    var_1_47 = (
                     ((((( ((((( var_1_13 )) > (( var_1_39 ))) ? (( var_1_13 )) : (( var_1_39 )))) )) > (( var_1_17 ))) ? (( ((((( var_1_13 )) > (( var_1_39 ))) ? (( var_1_13 )) : (( var_1_39 )))) )) : (( var_1_17 ))))
  );
 }
                   var_1_49 = (
  var_1_13
 );
                             if (var_1_2) {
                              var_1_1 = (
   var_1_3
  );
 }
 unsigned char stepLocal_0 = ((var_1_5) <= (var_1_6));
                              if ( ((stepLocal_0) || (var_1_1))) {
                               var_1_4 = (
                                ((((( 31.5f )) > (( ((((( var_1_7 )) < (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 )))) ))) ? (( 31.5f )) : (( ((((( var_1_7 )) < (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 )))) ))))
  );
 } else {
                               var_1_4 = (
                                ((
                                 ((
     var_1_9
    ) - (
     var_1_10
    ))
   ) - (
    var_1_11
   ))
  );
 }
 signed long int stepLocal_4 = 5;
                                if ( ((stepLocal_4) <= (var_1_17))) {
                                 var_1_21 = (
                                  ((
    var_1_22
   ) - (
    var_1_17
   ))
  );
 } else {
                                 if (var_1_1) {
                                  if (var_1_1) {
                                   var_1_21 = (
     var_1_17
    );
   } else {
                                   var_1_21 = (
     var_1_14
    );
   }
  }
 }
                                var_1_23 = (
  var_1_13
 );
                                var_1_24 = (
  var_1_7
 );
                                var_1_25 = (
  var_1_7
 );
 signed long int stepLocal_3 = var_1_23;
 unsigned char stepLocal_2 = var_1_13;
 signed long int stepLocal_1 = var_1_23;
                               if ( (( (( ((200) - (var_1_13))) - (var_1_14))) != (stepLocal_1))) {
                               var_1_12 = (
                                ((
    var_1_13
   ) + (
                                 ((((( var_1_14 )) < (( var_1_16 ))) ? (( var_1_14 )) : (( var_1_16 ))))
   ))
  );
 } else {
                                if ( (( ((var_1_23) / ( ((128) - (var_1_17))))) < (stepLocal_2))) {
                                 if ( ((var_1_13) >= (stepLocal_3))) {
                                  var_1_12 = (
     var_1_14
    );
   } else {
                                  var_1_12 = (
     var_1_17
    );
   }
  } else {
                                 var_1_12 = (
    var_1_17
   );
  }
 }
                               if ( (( (- ( ((var_1_13) / (var_1_17))))) > (var_1_23))) {
                                var_1_18 = (
   var_1_13
  );
 }
                                if ( (( ((var_1_16) / ( (((((var_1_17)) < ((var_1_20))) ? ((var_1_17)) : ((var_1_20))))))) > (var_1_18))) {
                                 var_1_19 = (
                                  ((((( var_1_17 )) > (( var_1_13 ))) ? (( var_1_17 )) : (( var_1_13 ))))
  );
 } else {
                                 var_1_19 = (
   var_1_17
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 0);
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= 4611686.018427383000e+12F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 64);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 127);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -1073741823);
 assume_abort_if_not(var_1_16 <= 1073741823);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 126);
 assume_abort_if_not(var_1_17 != 127);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= -32768);
 assume_abort_if_not(var_1_20 <= 32767);
 assume_abort_if_not(var_1_20 != 0);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 32767);
 assume_abort_if_not(var_1_22 <= 65534);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 4294967295);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 4294967295);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 4294967295);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 63);
 assume_abort_if_not(var_1_39 <= 127);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 63);
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= -922337.2036854776000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
 assume_abort_if_not(var_1_44 != 0.0F);
}
void updateLastVariables(void) {
}
int property(void) {
 if (var_1_2) {
 }
 if ( (( ((var_1_5) <= (var_1_6))) || (var_1_1))) {
 } else {
 }
 if ( (( (( ((200) - (var_1_13))) - (var_1_14))) != (var_1_23))) {
 } else {
  if ( (( ((var_1_23) / ( ((128) - (var_1_17))))) < (var_1_13))) {
   if ( ((var_1_13) >= (var_1_23))) {
   } else {
   }
  } else {
  }
 }
 if ( (( (- ( ((var_1_13) / (var_1_17))))) > (var_1_23))) {
 }
 if ( (( ((var_1_16) / ( (((((var_1_17)) < ((var_1_20))) ? ((var_1_17)) : ((var_1_20))))))) > (var_1_18))) {
 } else {
 }
 if ( ((5) <= (var_1_17))) {
 } else {
  if (var_1_1) {
   if (var_1_1) {
   } else {
   }
  }
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
        ) ? (
                                            ((
          var_1_1
         ) == (
                                             ((unsigned char) (
           var_1_3
          ))
         ))
        ) : (
         1
        ))
       ) && (
                                            ((
                                                  ((
                                                   ((
           var_1_5
          ) <= (
           var_1_6
          ))
         ) || (
          var_1_1
         ))
        ) ? (
                                             ((
          var_1_4
         ) == (
                                              ((float) (
                                               ((((( 31.5f )) > (( ((((( var_1_7 )) < (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 )))) ))) ? (( 31.5f )) : (( ((((( var_1_7 )) < (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 )))) ))))
          ))
         ))
        ) : (
                                             ((
          var_1_4
         ) == (
                                              ((float) (
                                               ((
                                                ((
             var_1_9
            ) - (
             var_1_10
            ))
           ) - (
            var_1_11
           ))
          ))
         ))
        ))
       ))
      ) && (
                                            ((
                                                 ((
                                                  ((
                                                   ((
           200
          ) - (
           var_1_13
          ))
         ) - (
          var_1_14
         ))
        ) != (
         var_1_23
        ))
       ) ? (
                                            ((
         var_1_12
        ) == (
                                             ((signed long int) (
                                              ((
           var_1_13
          ) + (
                                               ((((( var_1_14 )) < (( var_1_16 ))) ? (( var_1_14 )) : (( var_1_16 ))))
          ))
         ))
        ))
       ) : (
                                             ((
                                                  ((
                                                   ((
           var_1_23
          ) / (
                                                    ((
            128
           ) - (
            var_1_17
           ))
          ))
         ) < (
          var_1_13
         ))
        ) ? (
                                              ((
                                                     ((
           var_1_13
          ) >= (
           var_1_23
          ))
         ) ? (
                                               ((
           var_1_12
          ) == (
                                                ((signed long int) (
            var_1_14
           ))
          ))
         ) : (
                                               ((
           var_1_12
          ) == (
                                                ((signed long int) (
            var_1_17
           ))
          ))
         ))
        ) : (
                                              ((
          var_1_12
         ) == (
                                               ((signed long int) (
           var_1_17
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
          var_1_13
         ) / (
          var_1_17
         ))
        ))
       ) > (
        var_1_23
       ))
      ) ? (
                                            ((
        var_1_18
       ) == (
                                             ((unsigned long int) (
         var_1_13
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
                                                   ((((( var_1_17 )) < (( var_1_20 ))) ? (( var_1_17 )) : (( var_1_20 ))))
       ))
      ) > (
       var_1_18
      ))
     ) ? (
                                           ((
       var_1_19
      ) == (
                                            ((signed char) (
                                             ((((( var_1_17 )) > (( var_1_13 ))) ? (( var_1_17 )) : (( var_1_13 ))))
       ))
      ))
     ) : (
                                           ((
       var_1_19
      ) == (
                                            ((signed char) (
        var_1_17
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
      5
     ) <= (
      var_1_17
     ))
    ) ? (
                                          ((
      var_1_21
     ) == (
                                           ((unsigned short int) (
                                            ((
        var_1_22
       ) - (
        var_1_17
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_1
     ) ? (
                                           ((
       var_1_1
      ) ? (
                                            ((
        var_1_21
       ) == (
                                             ((unsigned short int) (
         var_1_17
        ))
       ))
      ) : (
                                            ((
        var_1_21
       ) == (
                                             ((unsigned short int) (
         var_1_14
        ))
       ))
      ))
     ) : (
      1
     ))
    ))
   ))
  ) && (
                                        ((
    var_1_23
   ) == (
                                         ((signed long int) (
     var_1_13
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_24
  ) == (
                                        ((double) (
    var_1_7
   ))
  ))
 ))
) && (
                                      ((
  var_1_25
 ) == (
                                       ((float) (
   var_1_7
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
