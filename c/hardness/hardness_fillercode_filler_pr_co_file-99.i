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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch99Filler_PR_CO.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
signed long int var_1_6 = 25;
signed long int var_1_7 = 5;
signed long int var_1_8 = 32;
signed long int var_1_9 = -8;
double var_1_10 = 99999999999.25;
double var_1_11 = 255.25;
double var_1_12 = 1.125;
unsigned char var_1_13 = 2;
unsigned char var_1_14 = 5;
unsigned char var_1_15 = 32;
unsigned char var_1_16 = 4;
unsigned char var_1_17 = 2;
signed char var_1_18 = 4;
signed char var_1_19 = 16;
signed char var_1_20 = 32;
signed char var_1_21 = 25;
signed char var_1_22 = 1;
signed char var_1_23 = 100;
double var_1_24 = 3.125;
double var_1_25 = 0.0;
unsigned short int var_1_26 = 32;
unsigned short int var_1_27 = 36217;
unsigned char var_1_28 = 2;
signed long int var_1_29 = -25;
signed long int var_1_30 = 100000000;
signed char var_1_31 = 4;
unsigned short int var_1_32 = 10;
signed char var_1_33 = 64;
signed short int var_1_34 = -5;
signed short int var_1_35 = 64;
signed char var_1_36 = -5;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 1;
signed char var_1_40 = -32;
unsigned short int var_1_41 = 10;
unsigned long int var_1_42 = 10;
unsigned long int var_1_43 = 2602144630;
unsigned long int var_1_44 = 4;
signed long int var_1_45 = 16;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 50;
void initially(void) {
}
void step(void) {
                              if (var_1_2) {
                               var_1_1 = (
                               ((
    var_1_3
   ) || (
    var_1_4
   ))
  );
 } else {
                               var_1_1 = (
                                ((
    var_1_3
   ) || (
                                 ((
     var_1_4
    ) || (
     var_1_5
    ))
   ))
  );
 }
                  if ( (( ((var_1_6) >> (var_1_32))) >= (var_1_30))) {
                   var_1_31 = (
                    ((((( var_1_32 )) > (( (( 4 ) - ( (( var_1_33 ) - ( 25 )) )) ))) ? (( var_1_32 )) : (( (( 4 ) - ( (( var_1_33 ) - ( 25 )) )) ))))
  );
 } else {
                   var_1_31 = (
   var_1_33
  );
 }
                   var_1_46 = (
  var_1_47
 );
                              var_1_6 = (
                               ((
                                ((
    var_1_7
   ) - (
    var_1_8
   ))
  ) + (
   var_1_9
  ))
 );
                  if ( ((var_1_6) < ( ((var_1_33) * (var_1_26))))) {
                   if ( ((var_1_6) <= (var_1_26))) {
                    var_1_35 = (
                     ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))
   );
  } else {
                    var_1_35 = (
    var_1_13
   );
  }
 }
                   if (var_1_1) {
                   var_1_36 = (
   var_1_33
  );
 } else {
                    var_1_36 = (
                     ((((( var_1_32 )) < (( var_1_33 ))) ? (( var_1_32 )) : (( var_1_33 ))))
  );
 }
                              if ( ((var_1_9) < ( ((var_1_6) * (var_1_8))))) {
                               if (var_1_3) {
                                if ( ((var_1_9) <= (var_1_6))) {
                                 var_1_10 = (
                                  ((
      var_1_11
     ) - (
      var_1_12
     ))
    );
   }
  }
 } else {
                               var_1_10 = (
   var_1_12
  );
 }
                  var_1_34 = (
  var_1_32
 );
                   if ( ((var_1_26) < (var_1_30))) {
                    var_1_44 = (
                     ((((( var_1_33 )) < (( ((((( 256u )) > (( var_1_32 ))) ? (( 256u )) : (( var_1_32 )))) ))) ? (( var_1_33 )) : (( ((((( 256u )) > (( var_1_32 ))) ? (( 256u )) : (( var_1_32 )))) ))))
  );
 }
                   var_1_45 = (
  var_1_26
 );
                               if ( (! (var_1_5))) {
                                var_1_15 = (
                                 ((((( (( var_1_16 ) + ( var_1_17 )) )) > (( var_1_14 ))) ? (( (( var_1_16 ) + ( var_1_17 )) )) : (( var_1_14 ))))
  );
 }
                   if ( ((var_1_6) > (var_1_30))) {
                    var_1_41 = (
                     ((((( ((((( var_1_32 )) < (( var_1_33 ))) ? (( var_1_32 )) : (( var_1_33 )))) )) > (( ((((32) < 0 ) ? -(32) : (32))) ))) ? (( ((((( var_1_32 )) < (( var_1_33 ))) ? (( var_1_32 )) : (( var_1_33 )))) )) : (( ((((32) < 0 ) ? -(32) : (32))) ))))
  );
 } else {
                    var_1_41 = (
                     ((((( ((((((((( 16 )) < (( var_1_33 ))) ? (( 16 )) : (( var_1_33 ))))) < 0 ) ? -(((((( 16 )) < (( var_1_33 ))) ? (( 16 )) : (( var_1_33 ))))) : (((((( 16 )) < (( var_1_33 ))) ? (( 16 )) : (( var_1_33 ))))))) )) > (( var_1_32 ))) ? (( ((((((((( 16 )) < (( var_1_33 ))) ? (( 16 )) : (( var_1_33 ))))) < 0 ) ? -(((((( 16 )) < (( var_1_33 ))) ? (( 16 )) : (( var_1_33 ))))) : (((((( 16 )) < (( var_1_33 ))) ? (( 16 )) : (( var_1_33 ))))))) )) : (( var_1_32 ))))
  );
 }
                               var_1_18 = (
                                ((((( (( (( var_1_19 ) - ( var_1_20 )) ) + ( var_1_21 )) )) > (( (( var_1_22 ) - ( var_1_23 )) ))) ? (( (( (( var_1_19 ) - ( var_1_20 )) ) + ( var_1_21 )) )) : (( (( var_1_22 ) - ( var_1_23 )) ))))
 );
                               if (var_1_1) {
                                var_1_26 = (
                                 ((((( ((((( var_1_15 )) < (( var_1_14 ))) ? (( var_1_15 )) : (( var_1_14 )))) )) < (( (( var_1_27 ) - ( var_1_17 )) ))) ? (( ((((( var_1_15 )) < (( var_1_14 ))) ? (( var_1_15 )) : (( var_1_14 )))) )) : (( (( var_1_27 ) - ( var_1_17 )) ))))
  );
 }
                               var_1_28 = (
  var_1_16
 );
                   var_1_38 = (
  var_1_39
 );
                   if (var_1_1) {
                    var_1_40 = (
                     ((((4) < 0 ) ? -(4) : (4)))
  );
 }
 signed long int stepLocal_1 = ((var_1_20) ^ (var_1_28));
                               if ( ((var_1_23) >= (stepLocal_1))) {
                                var_1_24 = (
                                 ((((( ((((( var_1_12 )) < (( var_1_11 ))) ? (( var_1_12 )) : (( var_1_11 )))) )) > (( (( (( var_1_25 ) - ( 25.5 )) ) - ( 127.125 )) ))) ? (( ((((( var_1_12 )) < (( var_1_11 ))) ? (( var_1_12 )) : (( var_1_11 )))) )) : (( (( (( var_1_25 ) - ( 25.5 )) ) - ( 127.125 )) ))))
  );
 }
                 var_1_29 = (
  var_1_30
 );
                   var_1_48 = (
  var_1_33
 );
 signed long int stepLocal_0 = (- (var_1_6));
                               if ( ((var_1_12) != (var_1_24))) {
                                var_1_13 = (
   var_1_14
  );
 } else {
                                if ( ((stepLocal_0) > (var_1_14))) {
                                 var_1_13 = (
    var_1_14
   );
  } else {
                                 var_1_13 = (
    25
   );
  }
 }
                   if ( ((var_1_26) <= (var_1_33))) {
                    var_1_42 = (
                     (((((((((( var_1_43 ) - ( var_1_32 ))) < 0 ) ? -((( var_1_43 ) - ( var_1_32 ))) : ((( var_1_43 ) - ( var_1_32 )))))) < 0 ) ? -((((((( var_1_43 ) - ( var_1_32 ))) < 0 ) ? -((( var_1_43 ) - ( var_1_32 ))) : ((( var_1_43 ) - ( var_1_32 )))))) : ((((((( var_1_43 ) - ( var_1_32 ))) < 0 ) ? -((( var_1_43 ) - ( var_1_32 ))) : ((( var_1_43 ) - ( var_1_32 ))))))))
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
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 0);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1073741823);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1073741823);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -1073741823);
 assume_abort_if_not(var_1_9 <= 1073741823);
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -63);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -1);
 assume_abort_if_not(var_1_22 <= 126);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 126);
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= 4611686.018427383000e+12F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 32767);
 assume_abort_if_not(var_1_27 <= 65534);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483647);
 assume_abort_if_not(var_1_30 <= 2147483646);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 30);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= 63);
 assume_abort_if_not(var_1_33 <= 126);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 1);
 assume_abort_if_not(var_1_39 <= 1);
 var_1_43 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_43 >= 2147483647);
 assume_abort_if_not(var_1_43 <= 4294967294);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 if (var_1_2) {
 } else {
 }
 if ( ((var_1_9) < ( ((var_1_6) * (var_1_8))))) {
  if (var_1_3) {
   if ( ((var_1_9) <= (var_1_6))) {
   }
  }
 } else {
 }
 if ( ((var_1_12) != (var_1_24))) {
 } else {
  if ( (( (- (var_1_6))) > (var_1_14))) {
  } else {
  }
 }
 if ( (! (var_1_5))) {
 }
 if ( ((var_1_23) >= ( ((var_1_20) ^ (var_1_28))))) {
 }
 if (var_1_1) {
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
                                             ((
            var_1_3
           ) || (
            var_1_4
           ))
          ))
         ))
        ) : (
                                            ((
          var_1_1
         ) == (
                                             ((unsigned char) (
                                              ((
            var_1_3
           ) || (
                                               ((
             var_1_4
            ) || (
             var_1_5
            ))
           ))
          ))
         ))
        ))
       ) && (
                                           ((
         var_1_6
        ) == (
                                            ((signed long int) (
                                             ((
                                              ((
            var_1_7
           ) - (
            var_1_8
           ))
          ) + (
           var_1_9
          ))
         ))
        ))
       ))
      ) && (
                                          ((
                                                ((
         var_1_9
        ) < (
                                                 ((
          var_1_6
         ) * (
          var_1_8
         ))
        ))
       ) ? (
                                           ((
         var_1_3
        ) ? (
                                            ((
                                                  ((
           var_1_9
          ) <= (
           var_1_6
          ))
         ) ? (
                                             ((
           var_1_10
          ) == (
                                              ((double) (
                                                ((
             var_1_11
            ) - (
             var_1_12
            ))
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
         var_1_10
        ) == (
                                             ((double) (
          var_1_12
         ))
        ))
       ))
      ))
     ) && (
                                           ((
                                                ((
        var_1_12
       ) != (
        var_1_24
       ))
      ) ? (
                                            ((
        var_1_13
       ) == (
                                             ((unsigned char) (
         var_1_14
        ))
       ))
      ) : (
                                            ((
                                                   ((
                                                    (- (
          var_1_6
         ))
        ) > (
         var_1_14
        ))
       ) ? (
                                             ((
         var_1_13
        ) == (
                                              ((unsigned char) (
          var_1_14
         ))
        ))
       ) : (
                                             ((
         var_1_13
        ) == (
                                              ((unsigned char) (
          25
         ))
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                                 (! (
       var_1_5
      ))
     ) ? (
                                           ((
       var_1_15
      ) == (
                                            ((unsigned char) (
                                             ((((( (( var_1_16 ) + ( var_1_17 )) )) > (( var_1_14 ))) ? (( (( var_1_16 ) + ( var_1_17 )) )) : (( var_1_14 ))))
       ))
      ))
     ) : (
      1
     ))
    ))
   ) && (
                                         ((
     var_1_18
    ) == (
                                          ((signed char) (
                                           ((((( (( (( var_1_19 ) - ( var_1_20 )) ) + ( var_1_21 )) )) > (( (( var_1_22 ) - ( var_1_23 )) ))) ? (( (( (( var_1_19 ) - ( var_1_20 )) ) + ( var_1_21 )) )) : (( (( var_1_22 ) - ( var_1_23 )) ))))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_23
    ) >= (
                                                ((
      var_1_20
     ) ^ (
      var_1_28
     ))
    ))
   ) ? (
                                         ((
     var_1_24
    ) == (
                                          ((double) (
                                           ((((( ((((( var_1_12 )) < (( var_1_11 ))) ? (( var_1_12 )) : (( var_1_11 )))) )) > (( (( (( var_1_25 ) - ( 25.5 )) ) - ( 127.125 )) ))) ? (( ((((( var_1_12 )) < (( var_1_11 ))) ? (( var_1_12 )) : (( var_1_11 )))) )) : (( (( (( var_1_25 ) - ( 25.5 )) ) - ( 127.125 )) ))))
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                       ((
   var_1_1
  ) ? (
                                        ((
    var_1_26
   ) == (
                                         ((unsigned short int) (
                                          ((((( ((((( var_1_15 )) < (( var_1_14 ))) ? (( var_1_15 )) : (( var_1_14 )))) )) < (( (( var_1_27 ) - ( var_1_17 )) ))) ? (( ((((( var_1_15 )) < (( var_1_14 ))) ? (( var_1_15 )) : (( var_1_14 )))) )) : (( (( var_1_27 ) - ( var_1_17 )) ))))
    ))
   ))
  ) : (
   1
  ))
 ))
) && (
                                      ((
  var_1_28
 ) == (
                                       ((unsigned char) (
   var_1_16
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
