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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch189Filler_PS_CO.c", 13, "reach_error"); }
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
signed char var_1_3 = 32;
signed char var_1_4 = 16;
double var_1_5 = 128.6;
double var_1_6 = 16.14;
unsigned long int var_1_7 = 1;
float var_1_8 = 50.5;
float var_1_9 = 5.5;
float var_1_10 = 50.2;
float var_1_11 = 1.95;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned long int var_1_15 = 64;
unsigned short int var_1_16 = 32;
unsigned long int var_1_17 = 1000;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 128;
unsigned char var_1_20 = 100;
unsigned char var_1_21 = 4;
unsigned char var_1_22 = 100;
unsigned char var_1_23 = 16;
unsigned char var_1_24 = 1;
signed char var_1_25 = 25;
signed char var_1_26 = -32;
unsigned short int var_1_27 = 16;
unsigned short int var_1_28 = 8;
unsigned short int var_1_29 = 2;
unsigned short int var_1_30 = 1;
unsigned short int var_1_31 = 0;
unsigned short int var_1_32 = 100;
unsigned short int var_1_33 = 64;
unsigned short int var_1_34 = 64;
unsigned short int var_1_35 = 40363;
signed long int var_1_36 = 10000;
signed long int var_1_37 = 1;
float var_1_38 = 15.25;
signed short int var_1_39 = -8;
signed short int var_1_40 = 5;
signed short int var_1_41 = 5;
unsigned char var_1_42 = 0;
unsigned char var_1_44 = 8;
signed short int var_1_45 = 5;
signed short int var_1_48 = -50;
void initially(void) {
}
void step(void) {
                 var_1_25 = (
  var_1_26
 );
                  if ( ((var_1_1) <= (var_1_26))) {
                   var_1_27 = (
                    ((((( ((((( ((((( var_1_28 )) > (( var_1_29 ))) ? (( var_1_28 )) : (( var_1_29 )))) )) > (( var_1_30 ))) ? (( ((((( var_1_28 )) > (( var_1_29 ))) ? (( var_1_28 )) : (( var_1_29 )))) )) : (( var_1_30 )))) )) < (( ((((( ((((( var_1_31 )) > (( var_1_32 ))) ? (( var_1_31 )) : (( var_1_32 )))) )) > (( (( var_1_33 ) + ( var_1_34 )) ))) ? (( ((((( var_1_31 )) > (( var_1_32 ))) ? (( var_1_31 )) : (( var_1_32 )))) )) : (( (( var_1_33 ) + ( var_1_34 )) )))) ))) ? (( ((((( ((((( var_1_28 )) > (( var_1_29 ))) ? (( var_1_28 )) : (( var_1_29 )))) )) > (( var_1_30 ))) ? (( ((((( var_1_28 )) > (( var_1_29 ))) ? (( var_1_28 )) : (( var_1_29 )))) )) : (( var_1_30 )))) )) : (( ((((( ((((( var_1_31 )) > (( var_1_32 ))) ? (( var_1_31 )) : (( var_1_32 )))) )) > (( (( var_1_33 ) + ( var_1_34 )) ))) ? (( ((((( var_1_31 )) > (( var_1_32 ))) ? (( var_1_31 )) : (( var_1_32 )))) )) : (( (( var_1_33 ) + ( var_1_34 )) )))) ))))
  );
 } else {
                   var_1_27 = (
                    ((
                     ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))
   ) - (
    var_1_34
   ))
  );
 }
                  if ( (( ((50) | (var_1_30))) >= (var_1_34))) {
                   if ( (( ((var_1_26) + (var_1_7))) < (-8))) {
                    var_1_36 = (
    var_1_35
   );
  } else {
                    var_1_36 = (
    var_1_37
   );
  }
 }
                  var_1_38 = (
  4.75f
 );
                   if ( ((var_1_7) >= (var_1_31))) {
                    var_1_39 = (
                     ((((( ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) )) > (( (( var_1_40 ) - ( var_1_41 )) ))) ? (( ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))) )) : (( (( var_1_40 ) - ( var_1_41 )) ))))
  );
 } else {
                    var_1_39 = (
                     ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))
  );
 }
                   if ( ((var_1_7) < (var_1_22))) {
                    var_1_42 = (
   var_1_44
  );
 } else {
                    var_1_42 = (
                     ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))
  );
 }
                   if (var_1_24) {
                    if ( (( (( ((var_1_44) - (var_1_41))) < (var_1_15))) || (var_1_24))) {
                     if ( (( ((var_1_29) + (var_1_40))) < ( ((var_1_15) ^ (var_1_33))))) {
                      var_1_45 = (
                       (((((( ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) ) + ( var_1_7 ))) < 0 ) ? -((( ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) ) + ( var_1_7 ))) : ((( ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7))) ) + ( var_1_7 )))))
    );
   }
  } else {
                     var_1_45 = (
    var_1_7
   );
  }
 } else {
                    var_1_45 = (
   var_1_48
  );
 }
                              var_1_7 = (
  var_1_4
 );
 signed char stepLocal_0 = var_1_4;
                              if ( ((var_1_7) <= (stepLocal_0))) {
                               var_1_8 = (
                                (((((( var_1_9 ) - ( (( var_1_10 ) + ( var_1_11 )) ))) < 0 ) ? -((( var_1_9 ) - ( (( var_1_10 ) + ( var_1_11 )) ))) : ((( var_1_9 ) - ( (( var_1_10 ) + ( var_1_11 )) )))))
  );
 } else {
                               var_1_8 = (
   var_1_10
  );
 }
                              var_1_12 = (
                               (! (
                                ((
    var_1_13
   ) || (
    var_1_14
   ))
  ))
 );
                               if ( (( ((var_1_7) / (var_1_16))) <= ( ((var_1_4) / (var_1_17))))) {
                                var_1_15 = (
                                 ((((((((( var_1_16 )) > (( var_1_4 ))) ? (( var_1_16 )) : (( var_1_4 ))))) < 0 ) ? -(((((( var_1_16 )) > (( var_1_4 ))) ? (( var_1_16 )) : (( var_1_4 ))))) : (((((( var_1_16 )) > (( var_1_4 ))) ? (( var_1_16 )) : (( var_1_4 )))))))
  );
 }
                               var_1_22 = (
                                ((((( var_1_4 )) > (( (( (( var_1_20 ) - ( var_1_21 )) ) + ( var_1_23 )) ))) ? (( var_1_4 )) : (( (( (( var_1_20 ) - ( var_1_21 )) ) + ( var_1_23 )) ))))
 );
                               var_1_24 = (
  var_1_14
 );
                              if (var_1_12) {
                               var_1_1 = (
                               ((
    var_1_3
   ) - (
    var_1_4
   ))
  );
 }
                              if ( ((var_1_3) > (var_1_15))) {
                               var_1_5 = (
                                ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))
  );
 }
                               if (var_1_12) {
                                if ( (( (- (var_1_5))) != ( (((((var_1_11)) > ((var_1_5))) ? ((var_1_11)) : ((var_1_5))))))) {
                                 var_1_18 = (
                                  ((
     200
    ) - (
     var_1_4
    ))
   );
  } else {
                                 var_1_18 = (
                                  ((
     var_1_19
    ) - (
                                   ((((( var_1_4 )) > (( (( var_1_20 ) - ( var_1_21 )) ))) ? (( var_1_4 )) : (( (( var_1_20 ) - ( var_1_21 )) ))))
    ))
   );
  }
 } else {
                                if ( (! (var_1_13))) {
                                 if ( ((var_1_7) > (var_1_19))) {
                                  var_1_18 = (
                                   ((
      128
     ) - (
      5
     ))
    );
   }
  } else {
                                 var_1_18 = (
                                  ((((( var_1_20 )) < (( (( var_1_4 ) + ( var_1_21 )) ))) ? (( var_1_20 )) : (( (( var_1_4 ) + ( var_1_21 )) ))))
   );
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -1);
 assume_abort_if_not(var_1_3 <= 126);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 126);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 65535);
 assume_abort_if_not(var_1_16 != 0);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 4294967295);
 assume_abort_if_not(var_1_17 != 0);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 127);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 63);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -127);
 assume_abort_if_not(var_1_26 <= 126);
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 65534);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 65534);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 65534);
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 65534);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 65534);
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 32767);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 32767);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 32767);
 assume_abort_if_not(var_1_35 <= 65534);
 var_1_37 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_37 >= -2147483647);
 assume_abort_if_not(var_1_37 <= 2147483646);
 var_1_40 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_40 >= -1);
 assume_abort_if_not(var_1_40 <= 32766);
 var_1_41 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 32766);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 254);
 var_1_48 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_48 >= -32767);
 assume_abort_if_not(var_1_48 <= 32766);
}
void updateLastVariables(void) {
}
int property(void) {
 if (var_1_12) {
 }
 if ( ((var_1_3) > (var_1_15))) {
 }
 if ( ((var_1_7) <= (var_1_4))) {
 } else {
 }
 if ( (( ((var_1_7) / (var_1_16))) <= ( ((var_1_4) / (var_1_17))))) {
 }
 if (var_1_12) {
  if ( (( (- (var_1_5))) != ( (((((var_1_11)) > ((var_1_5))) ? ((var_1_11)) : ((var_1_5))))))) {
  } else {
  }
 } else {
  if ( (! (var_1_13))) {
   if ( ((var_1_7) > (var_1_19))) {
   }
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
                   ((
                                           ((
         var_1_12
        ) ? (
                                            ((
          var_1_1
         ) == (
                                             ((signed char) (
                                             ((
            var_1_3
           ) - (
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
          var_1_3
         ) > (
          var_1_15
         ))
        ) ? (
                                            ((
          var_1_5
         ) == (
                                             ((double) (
                                              ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))
          ))
         ))
        ) : (
         1
        ))
       ))
      ) && (
                                          ((
        var_1_7
       ) == (
                                           ((unsigned long int) (
         var_1_4
        ))
       ))
      ))
     ) && (
                                         ((
                                               ((
        var_1_7
       ) <= (
        var_1_4
       ))
      ) ? (
                                          ((
        var_1_8
       ) == (
                                           ((float) (
                                            (((((( var_1_9 ) - ( (( var_1_10 ) + ( var_1_11 )) ))) < 0 ) ? -((( var_1_9 ) - ( (( var_1_10 ) + ( var_1_11 )) ))) : ((( var_1_9 ) - ( (( var_1_10 ) + ( var_1_11 )) )))))
        ))
       ))
      ) : (
                                          ((
        var_1_8
       ) == (
                                           ((float) (
         var_1_10
        ))
       ))
      ))
     ))
    ) && (
                                         ((
      var_1_12
     ) == (
                                          ((unsigned char) (
                                           (! (
                                            ((
         var_1_13
        ) || (
         var_1_14
        ))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 ((
       var_1_7
      ) / (
       var_1_16
      ))
     ) <= (
                                                 ((
       var_1_4
      ) / (
       var_1_17
      ))
     ))
    ) ? (
                                          ((
      var_1_15
     ) == (
                                           ((unsigned long int) (
                                            ((((((((( var_1_16 )) > (( var_1_4 ))) ? (( var_1_16 )) : (( var_1_4 ))))) < 0 ) ? -(((((( var_1_16 )) > (( var_1_4 ))) ? (( var_1_16 )) : (( var_1_4 ))))) : (((((( var_1_16 )) > (( var_1_4 ))) ? (( var_1_16 )) : (( var_1_4 )))))))
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
    var_1_12
   ) ? (
                                         ((
                                                ((
                                                 (- (
       var_1_5
      ))
     ) != (
                                                 ((((( var_1_11 )) > (( var_1_5 ))) ? (( var_1_11 )) : (( var_1_5 ))))
     ))
    ) ? (
                                          ((
      var_1_18
     ) == (
                                           ((unsigned char) (
                                            ((
        200
       ) - (
        var_1_4
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_18
     ) == (
                                           ((unsigned char) (
                                            ((
        var_1_19
       ) - (
                                             ((((( var_1_4 )) > (( (( var_1_20 ) - ( var_1_21 )) ))) ? (( var_1_4 )) : (( (( var_1_20 ) - ( var_1_21 )) ))))
       ))
      ))
     ))
    ))
   ) : (
                                         ((
                                                (! (
      var_1_13
     ))
    ) ? (
                                          ((
                                                 ((
       var_1_7
      ) > (
       var_1_19
      ))
     ) ? (
                                           ((
       var_1_18
      ) == (
                                            ((unsigned char) (
                                             ((
         128
        ) - (
         5
        ))
       ))
      ))
     ) : (
      1
     ))
    ) : (
                                          ((
      var_1_18
     ) == (
                                           ((unsigned char) (
                                            ((((( var_1_20 )) < (( (( var_1_4 ) + ( var_1_21 )) ))) ? (( var_1_20 )) : (( (( var_1_4 ) + ( var_1_21 )) ))))
      ))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_22
  ) == (
                                        ((unsigned char) (
                                         ((((( var_1_4 )) > (( (( (( var_1_20 ) - ( var_1_21 )) ) + ( var_1_23 )) ))) ? (( var_1_4 )) : (( (( (( var_1_20 ) - ( var_1_21 )) ) + ( var_1_23 )) ))))
   ))
  ))
 ))
) && (
                                      ((
  var_1_24
 ) == (
                                       ((unsigned char) (
   var_1_14
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
