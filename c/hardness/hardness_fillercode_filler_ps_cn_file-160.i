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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch160Filler_PS_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -64;
signed short int var_1_4 = 8;
signed short int var_1_5 = 500;
signed short int var_1_6 = 5;
signed short int var_1_7 = 100;
unsigned char var_1_8 = 1;
unsigned short int var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
signed short int var_1_13 = -8;
signed short int var_1_14 = 23230;
signed short int var_1_15 = 32;
unsigned long int var_1_16 = 2;
unsigned long int var_1_17 = 1108857779;
signed long int var_1_18 = -100;
double var_1_19 = 0.31;
double var_1_20 = 3.75;
double var_1_21 = 49.6;
unsigned short int var_1_22 = 5;
signed long int var_1_23 = 4;
signed long int var_1_24 = -5;
double var_1_25 = 7.75;
signed char var_1_26 = -2;
signed char var_1_27 = 10;
signed short int var_1_28 = 8;
signed short int var_1_29 = -32;
unsigned short int var_1_30 = 1;
unsigned short int var_1_31 = 4;
unsigned short int var_1_32 = 65365;
unsigned short int var_1_33 = 10;
unsigned short int var_1_34 = 8;
unsigned short int var_1_35 = 128;
signed short int var_1_36 = 8;
unsigned short int var_1_37 = 32;
unsigned long int var_1_38 = 2;
signed char var_1_39 = 5;
signed char var_1_40 = -2;
unsigned long int var_1_41 = 128;
signed char var_1_42 = -2;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
signed long int last_1_var_1_18 = -100;
void initially(void) {
}
void step(void) {
           var_1_19 = (
  var_1_20
 );
            if ( (( ((var_1_22) - (var_1_23))) >= (var_1_24))) {
             var_1_21 = (
              ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))
  );
 }
            var_1_26 = (
  var_1_27
 );
            if ( ((var_1_19) >= (var_1_21))) {
             var_1_28 = (
              ((((((((( (( var_1_27 ) + ( var_1_26 )) )) > (( var_1_29 ))) ? (( (( var_1_27 ) + ( var_1_26 )) )) : (( var_1_29 ))))) < 0 ) ? -(((((( (( var_1_27 ) + ( var_1_26 )) )) > (( var_1_29 ))) ? (( (( var_1_27 ) + ( var_1_26 )) )) : (( var_1_29 ))))) : (((((( (( var_1_27 ) + ( var_1_26 )) )) > (( var_1_29 ))) ? (( (( var_1_27 ) + ( var_1_26 )) )) : (( var_1_29 )))))))
  );
 } else {
             var_1_28 = (
              ((((( var_1_29 )) < (( 128 ))) ? (( var_1_29 )) : (( 128 ))))
  );
 }
             if ( ((var_1_26) >= (var_1_22))) {
              if ( ((var_1_24) >= (var_1_23))) {
               var_1_30 = (
                ((((( var_1_31 )) < (( ((((( (( var_1_32 ) - ( var_1_33 )) )) < (( ((((( var_1_34 )) < (( var_1_35 ))) ? (( var_1_34 )) : (( var_1_35 )))) ))) ? (( (( var_1_32 ) - ( var_1_33 )) )) : (( ((((( var_1_34 )) < (( var_1_35 ))) ? (( var_1_34 )) : (( var_1_35 )))) )))) ))) ? (( var_1_31 )) : (( ((((( (( var_1_32 ) - ( var_1_33 )) )) < (( ((((( var_1_34 )) < (( var_1_35 ))) ? (( var_1_34 )) : (( var_1_35 )))) ))) ? (( (( var_1_32 ) - ( var_1_33 )) )) : (( ((((( var_1_34 )) < (( var_1_35 ))) ? (( var_1_34 )) : (( var_1_35 )))) )))) ))))
   );
  }
 }
             if ( ((var_1_29) > (var_1_30))) {
              if ( ((var_1_19) < ( ((var_1_25) + (var_1_20))))) {
               var_1_36 = (
                (((((( var_1_26 ) + ( var_1_27 ))) < 0 ) ? -((( var_1_26 ) + ( var_1_27 ))) : ((( var_1_26 ) + ( var_1_27 )))))
   );
  }
 }
             var_1_37 = (
              ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))
 );
             if ( ((var_1_23) >= (var_1_26))) {
              var_1_38 = (
               ((((((((( 2u )) < (( ((((( var_1_23 )) < (( 2u ))) ? (( var_1_23 )) : (( 2u )))) ))) ? (( 2u )) : (( ((((( var_1_23 )) < (( 2u ))) ? (( var_1_23 )) : (( 2u )))) ))))) < 0 ) ? -(((((( 2u )) < (( ((((( var_1_23 )) < (( 2u ))) ? (( var_1_23 )) : (( 2u )))) ))) ? (( 2u )) : (( ((((( var_1_23 )) < (( 2u ))) ? (( var_1_23 )) : (( 2u )))) ))))) : (((((( 2u )) < (( ((((( var_1_23 )) < (( 2u ))) ? (( var_1_23 )) : (( 2u )))) ))) ? (( 2u )) : (( ((((( var_1_23 )) < (( 2u ))) ? (( var_1_23 )) : (( 2u )))) )))))))
  );
 }
             if ( ((var_1_32) <= (2))) {
              var_1_39 = (
               ((((((((( var_1_40 )) > (( -16 ))) ? (( var_1_40 )) : (( -16 ))))) < 0 ) ? -(((((( var_1_40 )) > (( -16 ))) ? (( var_1_40 )) : (( -16 ))))) : (((((( var_1_40 )) > (( -16 ))) ? (( var_1_40 )) : (( -16 )))))))
  );
 } else {
              var_1_39 = (
               ((((-2) < 0 ) ? -(-2) : (-2)))
  );
 }
             var_1_41 = (
  var_1_23
 );
             var_1_42 = (
  var_1_40
 );
             var_1_43 = (
  var_1_44
 );
 signed long int stepLocal_1 = (( ((var_1_14) - (var_1_5))) - (var_1_9));
                               if ( ((var_1_6) < (stepLocal_1))) {
                                var_1_13 = (
                                 ((
                                  ((
                                   ((
      var_1_9
     ) + (
      var_1_6
     ))
    ) - (
     var_1_5
    ))
   ) + (
    var_1_7
   ))
  );
 } else {
                                var_1_13 = (
                                 (((((( 1 ) - ( 50 ))) < 0 ) ? -((( 1 ) - ( 50 ))) : ((( 1 ) - ( 50 )))))
  );
 }
                               if ( ((var_1_9) == (var_1_14))) {
                                var_1_15 = (
                                 ((
    var_1_6
   ) - (
    var_1_4
   ))
  );
 }
                               if ( (( (( ((var_1_13) / (var_1_14))) * (var_1_9))) < ( (((((var_1_5)) < (( ((var_1_6) - (var_1_4))))) ? ((var_1_5)) : (( ((var_1_6) - (var_1_4))))))))) {
                                var_1_16 = (
                                 ((
    var_1_9
   ) + (
                                  ((
     var_1_17
    ) - (
     var_1_14
    ))
   ))
  );
 }
 unsigned short int stepLocal_3 = var_1_9;
 signed short int stepLocal_2 = var_1_5;
                                if ( ((stepLocal_3) >= (var_1_16))) {
                                var_1_18 = (
                                 ((
    var_1_4
   ) + (
    var_1_16
   ))
  );
 } else {
                                 if ( ((stepLocal_2) > ( ((var_1_4) << (var_1_16))))) {
                                  var_1_18 = (
    last_1_var_1_18
   );
  } else {
                                  var_1_18 = (
    var_1_16
   );
  }
 }
 unsigned long int stepLocal_0 = var_1_16;
                              if ( ((stepLocal_0) >= (var_1_18))) {
                               var_1_1 = (
                                ((
                                 ((
     var_1_4
    ) - (
                                  ((
      var_1_5
     ) + (
      var_1_6
     ))
    ))
   ) + (
                                 ((
     1
    ) - (
     var_1_7
    ))
   ))
  );
 } else {
                               var_1_1 = (
   var_1_5
  );
 }
                              if ( (( ((1) << ( ((var_1_9) + (10))))) >= (var_1_18))) {
                               var_1_8 = (
                                (! (
                                 ((
     var_1_10
    ) || (
     var_1_11
    ))
   ))
  );
 } else {
                               var_1_8 = (
   var_1_11
  );
 }
                              if ( ((var_1_11) || (var_1_8))) {
                               var_1_12 = (
   0
  );
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 16383);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 8192);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 8191);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 15);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 0);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= 16383);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 1073741823);
 assume_abort_if_not(var_1_17 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 65535);
 var_1_23 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 2147483647);
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= -2147483648);
 assume_abort_if_not(var_1_24 <= 2147483647);
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -127);
 assume_abort_if_not(var_1_27 <= 126);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -32766);
 assume_abort_if_not(var_1_29 <= 32766);
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 65534);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 32767);
 assume_abort_if_not(var_1_32 <= 65534);
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 32767);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 65534);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 65534);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -126);
 assume_abort_if_not(var_1_40 <= 126);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_18 = var_1_18;
}
int property(void) {
 if ( ((var_1_16) >= (var_1_18))) {
 } else {
 }
 if ( (( ((1) << ( ((var_1_9) + (10))))) >= (var_1_18))) {
 } else {
 }
 if ( ((var_1_11) || (var_1_8))) {
 }
 if ( ((var_1_6) < ( (( ((var_1_14) - (var_1_5))) - (var_1_9))))) {
 } else {
 }
 if ( ((var_1_9) == (var_1_14))) {
 }
 if ( (( (( ((var_1_13) / (var_1_14))) * (var_1_9))) < ( (((((var_1_5)) < (( ((var_1_6) - (var_1_4))))) ? ((var_1_5)) : (( ((var_1_6) - (var_1_4))))))))) {
 }
 if ( ((var_1_9) >= (var_1_16))) {
 } else {
  if ( ((var_1_5) > ( ((var_1_4) << (var_1_16))))) {
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
        var_1_16
       ) >= (
        var_1_18
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((signed short int) (
                                             ((
                                              ((
           var_1_4
          ) - (
                                               ((
            var_1_5
           ) + (
            var_1_6
           ))
          ))
         ) + (
                                              ((
           1
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
         var_1_5
        ))
       ))
      ))
     ) && (
                                          ((
                                                ((
                                                 ((
         1
        ) << (
                                                  ((
          var_1_9
         ) + (
          10
         ))
        ))
       ) >= (
        var_1_18
       ))
      ) ? (
                                           ((
        var_1_8
       ) == (
                                            ((unsigned char) (
                                             (! (
                                              ((
           var_1_10
          ) || (
           var_1_11
          ))
         ))
        ))
       ))
      ) : (
                                           ((
        var_1_8
       ) == (
                                            ((unsigned char) (
         var_1_11
        ))
       ))
      ))
     ))
    ) && (
                                         ((
                                               ((
       var_1_11
      ) || (
       var_1_8
      ))
     ) ? (
                                          ((
       var_1_12
      ) == (
                                           ((unsigned char) (
        0
       ))
      ))
     ) : (
      1
     ))
    ))
   ) && (
                                         ((
                                                ((
      var_1_6
     ) < (
                                                ((
                                                 ((
        var_1_14
       ) - (
        var_1_5
       ))
      ) - (
       var_1_9
      ))
     ))
    ) ? (
                                          ((
      var_1_13
     ) == (
                                           ((signed short int) (
                                            ((
                                             ((
                                              ((
          var_1_9
         ) + (
          var_1_6
         ))
        ) - (
         var_1_5
        ))
       ) + (
        var_1_7
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_13
     ) == (
                                           ((signed short int) (
                                            (((((( 1 ) - ( 50 ))) < 0 ) ? -((( 1 ) - ( 50 ))) : ((( 1 ) - ( 50 )))))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_9
    ) == (
     var_1_14
    ))
   ) ? (
                                         ((
     var_1_15
    ) == (
                                          ((signed short int) (
                                           ((
       var_1_6
      ) - (
       var_1_4
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
      var_1_13
     ) / (
      var_1_14
     ))
    ) * (
     var_1_9
    ))
   ) < (
                                               ((((( var_1_5 )) < (( (( var_1_6 ) - ( var_1_4 )) ))) ? (( var_1_5 )) : (( (( var_1_6 ) - ( var_1_4 )) ))))
   ))
  ) ? (
                                        ((
    var_1_16
   ) == (
                                         ((unsigned long int) (
                                          ((
      var_1_9
     ) + (
                                           ((
       var_1_17
      ) - (
       var_1_14
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
   var_1_9
  ) >= (
   var_1_16
  ))
 ) ? (
                                       ((
   var_1_18
  ) == (
                                        ((signed long int) (
                                         ((
     var_1_4
    ) + (
     var_1_16
    ))
   ))
  ))
 ) : (
                                       ((
                                              ((
    var_1_5
   ) > (
                                               ((
     var_1_4
    ) << (
     var_1_16
    ))
   ))
  ) ? (
                                        ((
    var_1_18
   ) == (
                                         ((signed long int) (
     last_1_var_1_18
    ))
   ))
  ) : (
                                        ((
    var_1_18
   ) == (
                                         ((signed long int) (
     var_1_16
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
