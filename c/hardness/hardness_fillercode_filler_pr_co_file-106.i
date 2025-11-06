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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch106Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -128;
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 1;
signed short int var_1_4 = 25;
signed short int var_1_5 = 64;
signed short int var_1_6 = 1000;
signed short int var_1_7 = 2;
float var_1_8 = 5.55;
signed short int var_1_9 = 4;
float var_1_10 = 9.58;
float var_1_11 = 200.25;
signed short int var_1_12 = -2;
signed short int var_1_13 = 1;
unsigned short int var_1_14 = 32;
unsigned short int var_1_15 = 10;
unsigned char var_1_16 = 100;
unsigned char var_1_17 = 1;
unsigned char var_1_19 = 128;
double var_1_20 = 200.5;
double var_1_21 = 1.6;
double var_1_22 = 15.75;
unsigned long int var_1_23 = 1;
unsigned long int var_1_24 = 32;
signed short int var_1_25 = -10;
signed long int var_1_26 = -100;
unsigned long int var_1_27 = 1000000000;
unsigned char var_1_28 = 0;
unsigned long int var_1_29 = 4;
unsigned long int var_1_30 = 256;
unsigned long int var_1_31 = 2517672879;
signed long int var_1_32 = -2;
signed long int var_1_33 = -4;
float var_1_34 = 4.75;
unsigned short int var_1_35 = 25;
unsigned short int var_1_36 = 0;
unsigned short int var_1_37 = 4;
unsigned char var_1_38 = 0;
unsigned short int var_1_39 = 32;
unsigned short int var_1_40 = 46045;
double var_1_41 = 99999999999999.25;
double var_1_42 = 1.8;
double var_1_43 = 255.125;
double var_1_44 = 199.2;
double var_1_45 = 16.4;
double var_1_46 = 1.8;
unsigned long int var_1_47 = 256;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
void initially(void) {
}
void step(void) {
                              if (var_1_2) {
                               if (var_1_3) {
                                var_1_1 = (
                                 ((((( var_1_4 )) < (( (( (( var_1_5 ) + ( 256 )) ) - ( ((((( var_1_6 )) < (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 )))) )) ))) ? (( var_1_4 )) : (( (( (( var_1_5 ) + ( 256 )) ) - ( ((((( var_1_6 )) < (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 )))) )) ))))
   );
  } else {
                                var_1_1 = (
                                 ((
     var_1_5
    ) - (
     var_1_7
    ))
   );
  }
 } else {
                               var_1_1 = (
   var_1_4
  );
 }
                              if ( ((var_1_7) <= ( ((var_1_5) + ( ((var_1_6) - (var_1_9))))))) {
                               if (var_1_3) {
                                var_1_8 = (
                                 ((
     var_1_10
    ) - (
     var_1_11
    ))
   );
  } else {
                                var_1_8 = (
                                 ((((( var_1_11 )) > (( var_1_10 ))) ? (( var_1_11 )) : (( var_1_10 ))))
   );
  }
 } else {
                               var_1_8 = (
   var_1_11
  );
 }
                   if (var_1_28) {
                   var_1_41 = (
                    ((((( ((((( var_1_42 )) > (( var_1_43 ))) ? (( var_1_42 )) : (( var_1_43 )))) )) > (( var_1_44 ))) ? (( ((((( var_1_42 )) > (( var_1_43 ))) ? (( var_1_42 )) : (( var_1_43 )))) )) : (( var_1_44 ))))
  );
 } else {
                    var_1_41 = (
                     (((((( var_1_45 ) - ( var_1_46 ))) < 0 ) ? -((( var_1_45 ) - ( var_1_46 ))) : ((( var_1_45 ) - ( var_1_46 )))))
  );
 }
                               var_1_14 = (
                                ((
                                 ((
                                  ((((( 4 )) < (( var_1_13 ))) ? (( 4 )) : (( var_1_13 ))))
   ) + (
    var_1_5
   ))
  ) + (
   var_1_7
  ))
 );
                               var_1_15 = (
  var_1_6
 );
                  if (var_1_28) {
                   var_1_37 = (
   var_1_36
  );
 } else {
                   if (var_1_38) {
                    var_1_37 = (
                     ((((( var_1_36 )) > (( var_1_39 ))) ? (( var_1_36 )) : (( var_1_39 ))))
   );
  } else {
                    var_1_37 = (
                     ((
     var_1_40
    ) - (
     32
    ))
   );
  }
 }
                   if ( (( ((var_1_30) & (var_1_33))) <= (var_1_39))) {
                    if (var_1_38) {
                     if ( ((var_1_20) <= (var_1_45))) {
                      var_1_47 = (
     var_1_30
    );
   }
  } else {
                     var_1_47 = (
                      ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))
   );
  }
 } else {
                    if ( ((var_1_42) >= ( ((var_1_44) * ( ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45)))))))) {
                     var_1_47 = (
    var_1_31
   );
  } else {
                     var_1_47 = (
    8u
   );
  }
 }
 unsigned char stepLocal_1 = var_1_2;
                               if ( ((var_1_17) || (stepLocal_1))) {
                                if ( ((var_1_11) > ( (- (var_1_8))))) {
                                 var_1_16 = (
    var_1_19
   );
  }
 }
                  if (var_1_28) {
                   var_1_27 = (
                   ((
    var_1_29
   ) + (
    var_1_30
   ))
  );
 } else {
                   var_1_27 = (
                    ((
    var_1_31
   ) - (
                     ((((( var_1_29 )) < (( var_1_30 ))) ? (( var_1_29 )) : (( var_1_30 ))))
   ))
  );
 }
                  var_1_34 = (
  15.8f
 );
                               var_1_23 = (
  var_1_24
 );
                               var_1_26 = (
  var_1_23
 );
                  var_1_35 = (
  var_1_36
 );
 unsigned long int stepLocal_0 = ((var_1_23) * (var_1_9));
                               if ( (( ((var_1_7) + (var_1_6))) > (stepLocal_0))) {
                                var_1_12 = (
                                 ((
    var_1_5
   ) - (
                                  ((
     var_1_13
    ) + (
     64
    ))
   ))
  );
 } else {
                                var_1_12 = (
   var_1_13
  );
 }
                  if ( ((var_1_31) >= ( (~ (var_1_23))))) {
                   var_1_32 = (
   var_1_33
  );
 }
 unsigned long int stepLocal_2 = var_1_23;
                               if ( (( ((var_1_6) + (var_1_15))) <= (stepLocal_2))) {
                                var_1_20 = (
   var_1_10
  );
 } else {
                                var_1_20 = (
                                 ((((( var_1_11 )) > (( ((((( var_1_10 )) < (( (( var_1_21 ) + ( var_1_22 )) ))) ? (( var_1_10 )) : (( (( var_1_21 ) + ( var_1_22 )) )))) ))) ? (( var_1_11 )) : (( ((((( var_1_10 )) < (( (( var_1_21 ) + ( var_1_22 )) ))) ? (( var_1_10 )) : (( (( var_1_21 ) + ( var_1_22 )) )))) ))))
  );
 }
                               var_1_25 = (
  var_1_12
 );
                   if ( (( ((((( (((((var_1_42)) < ((var_1_43))) ? ((var_1_42)) : ((var_1_43)))))) < ((var_1_20))) ? (( (((((var_1_42)) < ((var_1_43))) ? ((var_1_42)) : ((var_1_43)))))) : ((var_1_20))))) < ( (- (var_1_44))))) {
                    if (var_1_28) {
                     var_1_49 = (
                      ((
     var_1_50
    ) || (
     var_1_51
    ))
   );
  } else {
                     var_1_49 = (
    0
   );
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
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32767);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 16383);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 4294967294);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 2147483647);
 assume_abort_if_not(var_1_31 <= 4294967294);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= -2147483647);
 assume_abort_if_not(var_1_33 <= 2147483646);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 65534);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 1);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 65534);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 32767);
 assume_abort_if_not(var_1_40 <= 65534);
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= -922337.2036854766000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= -922337.2036854766000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854766000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 0);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 if (var_1_2) {
  if (var_1_3) {
  } else {
  }
 } else {
 }
 if ( ((var_1_7) <= ( ((var_1_5) + ( ((var_1_6) - (var_1_9))))))) {
  if (var_1_3) {
  } else {
  }
 } else {
 }
 if ( (( ((var_1_7) + (var_1_6))) > ( ((var_1_23) * (var_1_9))))) {
 } else {
 }
 if ( ((var_1_17) || (var_1_2))) {
  if ( ((var_1_11) > ( (- (var_1_8))))) {
  }
 }
 if ( (( ((var_1_6) + (var_1_15))) <= (var_1_23))) {
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
                    ((
                                             ((
          var_1_2
         ) ? (
                                              ((
           var_1_3
          ) ? (
                                               ((
            var_1_1
           ) == (
                                                ((signed short int) (
                                                 ((((( var_1_4 )) < (( (( (( var_1_5 ) + ( 256 )) ) - ( ((((( var_1_6 )) < (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 )))) )) ))) ? (( var_1_4 )) : (( (( (( var_1_5 ) + ( 256 )) ) - ( ((((( var_1_6 )) < (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 )))) )) ))))
            ))
           ))
          ) : (
                                               ((
            var_1_1
           ) == (
                                                ((signed short int) (
                                                 ((
              var_1_5
             ) - (
              var_1_7
             ))
            ))
           ))
          ))
         ) : (
                                              ((
           var_1_1
          ) == (
                                               ((signed short int) (
            var_1_4
           ))
          ))
         ))
        ) && (
                                             ((
                                                   ((
           var_1_7
          ) <= (
                                                    ((
            var_1_5
           ) + (
                                                     ((
             var_1_6
            ) - (
             var_1_9
            ))
           ))
          ))
         ) ? (
                                              ((
           var_1_3
          ) ? (
                                               ((
            var_1_8
           ) == (
                                                ((float) (
                                                 ((
              var_1_10
             ) - (
              var_1_11
             ))
            ))
           ))
          ) : (
                                               ((
            var_1_8
           ) == (
                                                ((float) (
                                                 ((((( var_1_11 )) > (( var_1_10 ))) ? (( var_1_11 )) : (( var_1_10 ))))
            ))
           ))
          ))
         ) : (
                                              ((
           var_1_8
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
                                                    ((
           var_1_7
          ) + (
           var_1_6
          ))
         ) > (
                                                    ((
           var_1_23
          ) * (
           var_1_9
          ))
         ))
        ) ? (
                                              ((
          var_1_12
         ) == (
                                               ((signed short int) (
                                                ((
            var_1_5
           ) - (
                                                 ((
             var_1_13
            ) + (
             64
            ))
           ))
          ))
         ))
        ) : (
                                              ((
          var_1_12
         ) == (
                                               ((signed short int) (
           var_1_13
          ))
         ))
        ))
       ))
      ) && (
                                            ((
        var_1_14
       ) == (
                                             ((unsigned short int) (
                                              ((
                                               ((
                                                ((((( 4 )) < (( var_1_13 ))) ? (( 4 )) : (( var_1_13 ))))
          ) + (
           var_1_5
          ))
         ) + (
          var_1_7
         ))
        ))
       ))
      ))
     ) && (
                                           ((
       var_1_15
      ) == (
                                            ((unsigned short int) (
        var_1_6
       ))
      ))
     ))
    ) && (
                                          ((
                                                 ((
       var_1_17
      ) || (
       var_1_2
      ))
     ) ? (
                                           ((
                                                  ((
        var_1_11
       ) > (
                                                   (- (
         var_1_8
        ))
       ))
      ) ? (
                                            ((
        var_1_16
       ) == (
                                             ((unsigned char) (
         var_1_19
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
                                                 ((
       var_1_6
      ) + (
       var_1_15
      ))
     ) <= (
      var_1_23
     ))
    ) ? (
                                          ((
      var_1_20
     ) == (
                                           ((double) (
       var_1_10
      ))
     ))
    ) : (
                                          ((
      var_1_20
     ) == (
                                           ((double) (
                                            ((((( var_1_11 )) > (( ((((( var_1_10 )) < (( (( var_1_21 ) + ( var_1_22 )) ))) ? (( var_1_10 )) : (( (( var_1_21 ) + ( var_1_22 )) )))) ))) ? (( var_1_11 )) : (( ((((( var_1_10 )) < (( (( var_1_21 ) + ( var_1_22 )) ))) ? (( var_1_10 )) : (( (( var_1_21 ) + ( var_1_22 )) )))) ))))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
    var_1_23
   ) == (
                                         ((unsigned long int) (
     var_1_24
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_25
  ) == (
                                        ((signed short int) (
    var_1_12
   ))
  ))
 ))
) && (
                                      ((
  var_1_26
 ) == (
                                       ((signed long int) (
   var_1_23
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
