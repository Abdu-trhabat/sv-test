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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch115Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 32;
signed char var_1_3 = -4;
signed long int var_1_4 = 2;
signed char var_1_5 = 2;
unsigned short int var_1_6 = 5;
unsigned char var_1_7 = 1;
unsigned short int var_1_8 = 10;
unsigned short int var_1_9 = 37230;
unsigned short int var_1_10 = 256;
unsigned short int var_1_11 = 2;
unsigned short int var_1_15 = 32;
signed short int var_1_16 = -16;
signed short int var_1_17 = 0;
signed short int var_1_18 = 0;
unsigned char var_1_19 = 4;
unsigned char var_1_20 = 128;
unsigned char var_1_21 = 5;
signed char var_1_22 = 10;
signed char var_1_23 = 32;
signed char var_1_24 = 5;
signed char var_1_25 = 4;
signed char var_1_26 = 2;
unsigned short int var_1_27 = 64;
unsigned short int var_1_28 = 256;
double var_1_29 = 9.75;
double var_1_30 = 3.2;
double var_1_31 = -0.75;
signed long int var_1_32 = 2;
signed long int var_1_33 = -2;
unsigned short int var_1_34 = 49339;
unsigned short int var_1_35 = 4;
unsigned short int var_1_36 = 0;
float var_1_37 = 7.5;
float var_1_38 = 3.4;
unsigned char var_1_39 = 32;
unsigned char var_1_40 = 10;
float var_1_41 = 99999999999.2;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned long int var_1_45 = 32;
signed char var_1_46 = 25;
signed char var_1_47 = 16;
signed char var_1_48 = 10;
signed char var_1_49 = 50;
double var_1_50 = 4.1;
double var_1_51 = 1.6;
void initially(void) {
}
void step(void) {
                  if ( (( (((((var_1_29)) < ((var_1_30))) ? ((var_1_29)) : ((var_1_30))))) < (var_1_31))) {
                   if ( (( ((var_1_32) & ( ((32) % (-8))))) >= (var_1_33))) {
                    var_1_28 = (
                     ((
     var_1_34
    ) - (
                      ((((( var_1_35 )) > (( var_1_36 ))) ? (( var_1_35 )) : (( var_1_36 ))))
    ))
   );
  }
 }
                  if ( ((var_1_11) < (var_1_33))) {
                   var_1_37 = (
   var_1_38
  );
 }
                  var_1_39 = (
  var_1_40
 );
                   if (var_1_42) {
                    if ( ((var_1_43) && (var_1_44))) {
                     if ( ((var_1_35) < (var_1_36))) {
                      if ( (( ((var_1_36) | (var_1_34))) < ( (((((var_1_27)) < ((var_1_16))) ? ((var_1_27)) : ((var_1_16))))))) {
                       var_1_41 = (
      var_1_38
     );
    } else {
                       var_1_41 = (
      10.75f
     );
    }
   }
  }
 }
                   if ( ((var_1_32) < (var_1_36))) {
                    var_1_45 = (
                     ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))
  );
 } else {
                    var_1_45 = (
                     ((
    var_1_34
   ) + (
                      ((((( var_1_35 )) > (( var_1_40 ))) ? (( var_1_35 )) : (( var_1_40 ))))
   ))
  );
 }
                   if ( (( ((50u) ^ (var_1_6))) > ( ((var_1_36) * (var_1_33))))) {
                    var_1_46 = (
                     (((((((((( var_1_47 ) - ( var_1_48 ))) < 0 ) ? -((( var_1_47 ) - ( var_1_48 ))) : ((( var_1_47 ) - ( var_1_48 )))))) < 0 ) ? -((((((( var_1_47 ) - ( var_1_48 ))) < 0 ) ? -((( var_1_47 ) - ( var_1_48 ))) : ((( var_1_47 ) - ( var_1_48 )))))) : ((((((( var_1_47 ) - ( var_1_48 ))) < 0 ) ? -((( var_1_47 ) - ( var_1_48 ))) : ((( var_1_47 ) - ( var_1_48 ))))))))
  );
 } else {
                    if (var_1_44) {
                     var_1_46 = (
                      ((((( var_1_48 )) < (( ((((( var_1_47 )) < (( var_1_49 ))) ? (( var_1_47 )) : (( var_1_49 )))) ))) ? (( var_1_48 )) : (( ((((( var_1_47 )) < (( var_1_49 ))) ? (( var_1_47 )) : (( var_1_49 )))) ))))
   );
  }
 }
                   if (var_1_44) {
                    if ( ((var_1_47) < ( ((((-4) < 0 ) ? -(-4) : (-4)))))) {
                     var_1_50 = (
                      ((
     25.4
    ) + (
     var_1_51
    ))
   );
  } else {
                     var_1_50 = (
    var_1_38
   );
  }
 } else {
                    var_1_50 = (
   var_1_38
  );
 }
                               if (var_1_7) {
                                var_1_6 = (
                                 ((((( var_1_8 )) < (( (( var_1_9 ) - ( var_1_10 )) ))) ? (( var_1_8 )) : (( (( var_1_9 ) - ( var_1_10 )) ))))
  );
 }
 signed long int stepLocal_5 = (((((((((var_1_26)) > ((var_1_23))) ? ((var_1_26)) : ((var_1_23))))) < 0 ) ? -((((((var_1_26)) > ((var_1_23))) ? ((var_1_26)) : ((var_1_23))))) : ((((((var_1_26)) > ((var_1_23))) ? ((var_1_26)) : ((var_1_23)))))));
                                if ( ((var_1_25) < (stepLocal_5))) {
                                 var_1_27 = (
   64
  );
 }
 signed long int stepLocal_3 = ((var_1_15) - (1000000));
 unsigned short int stepLocal_2 = var_1_15;
                               if ( ((stepLocal_2) > (var_1_4))) {
                                if ( ((stepLocal_3) == (var_1_27))) {
                                 var_1_16 = (
                                  ((
                                   ((
      24405
     ) - (
      var_1_17
     ))
    ) - (
                                   ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))
    ))
   );
  }
 } else {
                                var_1_16 = (
                                 ((
    var_1_17
   ) - (
                                  ((((( 100 )) > (( var_1_18 ))) ? (( 100 )) : (( var_1_18 ))))
   ))
  );
 }
                               if ( (( (- (var_1_9))) > (var_1_27))) {
                                var_1_19 = (
                                 ((
    var_1_20
   ) - (
    var_1_21
   ))
  );
 }
 signed long int stepLocal_4 = 256;
                               if ( ((stepLocal_4) > ( ((var_1_27) - (var_1_17))))) {
                                var_1_22 = (
                                 ((
                                  ((
                                   ((
      var_1_23
     ) - (
      var_1_24
     ))
    ) + (
     var_1_25
    ))
   ) - (
                                  ((
                                   ((
      10
     ) + (
      2
     ))
    ) + (
     var_1_26
    ))
   ))
  );
 }
                              if ( (( ((var_1_22) / ( (((((8)) < ((var_1_3))) ? ((8)) : ((var_1_3))))))) >= (var_1_4))) {
                               if ( (! ( ((var_1_3) >= (var_1_22))))) {
                                var_1_1 = (
    var_1_5
   );
  } else {
                                var_1_1 = (
    -25
   );
  }
 }
 signed long int stepLocal_1 = var_1_4;
 signed char stepLocal_0 = var_1_3;
                               if ( ((stepLocal_0) <= (var_1_22))) {
                                var_1_11 = (
                                 ((((( var_1_8 )) < (( var_1_9 ))) ? (( var_1_8 )) : (( var_1_9 ))))
  );
 } else {
                                if ( ((var_1_19) <= (stepLocal_1))) {
                                 var_1_11 = (
    var_1_15
   );
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 assume_abort_if_not(var_1_3 != 0);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -127);
 assume_abort_if_not(var_1_5 <= 126);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 65534);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 127);
 assume_abort_if_not(var_1_20 <= 254);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 127);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 31);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 31);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 63);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_32 >= -2147483648);
 assume_abort_if_not(var_1_32 <= 2147483647);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= -2147483648);
 assume_abort_if_not(var_1_33 <= 2147483647);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 32767);
 assume_abort_if_not(var_1_34 <= 65534);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 32767);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 32767);
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 254);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 1);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 126);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 126);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= -127);
 assume_abort_if_not(var_1_49 <= 126);
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= -461168.6018427383000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 if ( (( ((var_1_22) / ( (((((8)) < ((var_1_3))) ? ((8)) : ((var_1_3))))))) >= (var_1_4))) {
  if ( (! ( ((var_1_3) >= (var_1_22))))) {
  } else {
  }
 }
 if (var_1_7) {
 }
 if ( ((var_1_3) <= (var_1_22))) {
 } else {
  if ( ((var_1_19) <= (var_1_4))) {
  }
 }
 if ( ((var_1_15) > (var_1_4))) {
  if ( (( ((var_1_15) - (1000000))) == (var_1_27))) {
  }
 } else {
 }
 if ( (( (- (var_1_9))) > (var_1_27))) {
 }
 if ( ((256) > ( ((var_1_27) - (var_1_17))))) {
 }
 if ( ((var_1_25) < ( (((((((((var_1_26)) > ((var_1_23))) ? ((var_1_26)) : ((var_1_23))))) < 0 ) ? -((((((var_1_26)) > ((var_1_23))) ? ((var_1_26)) : ((var_1_23))))) : ((((((var_1_26)) > ((var_1_23))) ? ((var_1_26)) : ((var_1_23)))))))))) {
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
         var_1_22
        ) / (
                                                 ((((( 8 )) < (( var_1_3 ))) ? (( 8 )) : (( var_1_3 ))))
        ))
       ) >= (
        var_1_4
       ))
      ) ? (
                                           ((
                                                 (! (
                                                  ((
          var_1_3
         ) >= (
          var_1_22
         ))
        ))
       ) ? (
                                            ((
         var_1_1
        ) == (
                                             ((signed char) (
          var_1_5
         ))
        ))
       ) : (
                                            ((
         var_1_1
        ) == (
                                             ((signed char) (
          -25
         ))
        ))
       ))
      ) : (
       1
      ))
     ) && (
                                           ((
       var_1_7
      ) ? (
                                            ((
        var_1_6
       ) == (
                                             ((unsigned short int) (
                                              ((((( var_1_8 )) < (( (( var_1_9 ) - ( var_1_10 )) ))) ? (( var_1_8 )) : (( (( var_1_9 ) - ( var_1_10 )) ))))
        ))
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                          ((
                                                 ((
       var_1_3
      ) <= (
       var_1_22
      ))
     ) ? (
                                           ((
       var_1_11
      ) == (
                                            ((unsigned short int) (
                                             ((((( var_1_8 )) < (( var_1_9 ))) ? (( var_1_8 )) : (( var_1_9 ))))
       ))
      ))
     ) : (
                                           ((
                                                  ((
        var_1_19
       ) <= (
        var_1_4
       ))
      ) ? (
                                            ((
        var_1_11
       ) == (
                                             ((unsigned short int) (
         var_1_15
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
      var_1_15
     ) > (
      var_1_4
     ))
    ) ? (
                                          ((
                                                 ((
                                                  ((
        var_1_15
       ) - (
        1000000
       ))
      ) == (
       var_1_27
      ))
     ) ? (
                                           ((
       var_1_16
      ) == (
                                            ((signed short int) (
                                             ((
                                              ((
          24405
         ) - (
          var_1_17
         ))
        ) - (
                                              ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))
        ))
       ))
      ))
     ) : (
      1
     ))
    ) : (
                                          ((
      var_1_16
     ) == (
                                           ((signed short int) (
                                            ((
        var_1_17
       ) - (
                                             ((((( 100 )) > (( var_1_18 ))) ? (( 100 )) : (( var_1_18 ))))
       ))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                (- (
      var_1_9
     ))
    ) > (
     var_1_27
    ))
   ) ? (
                                         ((
     var_1_19
    ) == (
                                          ((unsigned char) (
                                           ((
       var_1_20
      ) - (
       var_1_21
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
    256
   ) > (
                                               ((
     var_1_27
    ) - (
     var_1_17
    ))
   ))
  ) ? (
                                        ((
    var_1_22
   ) == (
                                         ((signed char) (
                                          ((
                                           ((
                                            ((
        var_1_23
       ) - (
        var_1_24
       ))
      ) + (
       var_1_25
      ))
     ) - (
                                           ((
                                            ((
        10
       ) + (
        2
       ))
      ) + (
       var_1_26
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
   var_1_25
  ) < (
                                              ((((((((( var_1_26 )) > (( var_1_23 ))) ? (( var_1_26 )) : (( var_1_23 ))))) < 0 ) ? -(((((( var_1_26 )) > (( var_1_23 ))) ? (( var_1_26 )) : (( var_1_23 ))))) : (((((( var_1_26 )) > (( var_1_23 ))) ? (( var_1_26 )) : (( var_1_23 )))))))
  ))
 ) ? (
                                       ((
   var_1_27
  ) == (
                                        ((unsigned short int) (
    64
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
