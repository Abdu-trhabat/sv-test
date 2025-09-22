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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch28Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 4;
unsigned short int var_1_4 = 1;
unsigned short int var_1_5 = 16;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 2;
unsigned char var_1_8 = 128;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 100;
signed short int var_1_11 = 10;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
signed long int var_1_15 = 128;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 5;
double var_1_18 = 3.6;
double var_1_19 = 31.45;
float var_1_20 = 50.25;
float var_1_21 = 9.8;
float var_1_22 = 4.65;
float var_1_23 = 99.65;
unsigned long int var_1_25 = 128;
unsigned long int var_1_26 = 2;
signed short int var_1_27 = -16;
unsigned char var_1_28 = 0;
signed short int var_1_29 = 10000;
double var_1_30 = 4.5;
double var_1_31 = 255.2;
signed char var_1_32 = -10;
unsigned long int var_1_33 = 0;
signed char var_1_34 = 5;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 1;
signed short int var_1_37 = 4;
signed short int var_1_38 = 2;
double var_1_39 = 16.75;
signed long int var_1_40 = 128;
double var_1_41 = 31.6;
double var_1_42 = 5.25;
double var_1_43 = 9999.6;
unsigned char var_1_44 = 5;
double var_1_45 = 2.75;
unsigned char var_1_46 = 1;
unsigned short int last_1_var_1_1 = 4;
signed long int last_1_var_1_15 = 128;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_var_1_15;
                                         if ( ((stepLocal_0) <= (last_1_var_1_1))) {
                                          var_1_1 = (
                                           ((((( ((((( last_1_var_1_15 )) < (( ((((( last_1_var_1_1 )) > (( var_1_4 ))) ? (( last_1_var_1_1 )) : (( var_1_4 )))) ))) ? (( last_1_var_1_15 )) : (( ((((( last_1_var_1_1 )) > (( var_1_4 ))) ? (( last_1_var_1_1 )) : (( var_1_4 )))) )))) )) > (( var_1_5 ))) ? (( ((((( last_1_var_1_15 )) < (( ((((( last_1_var_1_1 )) > (( var_1_4 ))) ? (( last_1_var_1_1 )) : (( var_1_4 )))) ))) ? (( last_1_var_1_15 )) : (( ((((( last_1_var_1_1 )) > (( var_1_4 ))) ? (( last_1_var_1_1 )) : (( var_1_4 )))) )))) )) : (( var_1_5 ))))
  );
 }
 signed long int stepLocal_1 = 5;
                              if ( ((var_1_1) < (stepLocal_1))) {
                               var_1_6 = (
                                ((((( ((((( ((((( var_1_7 )) < (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 )))) )) < (( var_1_9 ))) ? (( ((((( var_1_7 )) < (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 )))) )) : (( var_1_9 )))) )) > (( var_1_10 ))) ? (( ((((( ((((( var_1_7 )) < (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 )))) )) < (( var_1_9 ))) ? (( ((((( var_1_7 )) < (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 )))) )) : (( var_1_9 )))) )) : (( var_1_10 ))))
  );
 } else {
                               var_1_6 = (
   var_1_10
  );
 }
 signed long int stepLocal_3 = (( (((((128)) > ((var_1_16))) ? ((128)) : ((var_1_16))))) - (var_1_17));
                               if ( ((var_1_6) <= (stepLocal_3))) {
                                var_1_15 = (
                                 ((((( (( var_1_5 ) - ( var_1_6 )) )) > (( ((((( var_1_8 )) < (( var_1_7 ))) ? (( var_1_8 )) : (( var_1_7 )))) ))) ? (( (( var_1_5 ) - ( var_1_6 )) )) : (( ((((( var_1_8 )) < (( var_1_7 ))) ? (( var_1_8 )) : (( var_1_7 )))) ))))
  );
 } else {
                                var_1_15 = (
   var_1_6
  );
 }
 unsigned char stepLocal_2 = ((var_1_4) > ( (~ (var_1_10))));
                               if (var_1_12) {
                               if (var_1_13) {
                                if ( ((stepLocal_2) && (var_1_14))) {
                                 var_1_11 = (
                                  ((((( var_1_8 )) > (( (( var_1_10 ) + ( var_1_6 )) ))) ? (( var_1_8 )) : (( (( var_1_10 ) + ( var_1_6 )) ))))
    );
   } else {
                                 var_1_11 = (
     var_1_15
    );
   }
  } else {
                                var_1_11 = (
    var_1_8
   );
  }
 } else {
                                var_1_11 = (
   var_1_15
  );
 }
 signed long int stepLocal_4 = var_1_15;
                               if ( (( (( ((200) << (var_1_1))) * ( ((var_1_17) * (var_1_7))))) < (stepLocal_4))) {
                                var_1_18 = (
   var_1_19
  );
 }
 signed short int stepLocal_5 = var_1_11;
                                if (var_1_13) {
                                 if (var_1_14) {
                                 if (var_1_12) {
                                  var_1_20 = (
                                   ((
      var_1_21
     ) + (
                                    ((((( var_1_22 )) > (( var_1_23 ))) ? (( var_1_22 )) : (( var_1_23 ))))
     ))
    );
   }
  } else {
                                  if ( ((stepLocal_5) <= (0))) {
                                   var_1_20 = (
     var_1_19
    );
   } else {
                                   var_1_20 = (
     var_1_22
    );
   }
  }
 } else {
                                 var_1_20 = (
   var_1_23
  );
 }
                  var_1_25 = (
  var_1_26
 );
                  if ( (( ((var_1_25) < ( ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))))) || (var_1_28))) {
                   var_1_27 = (
   var_1_29
  );
 }
                  if ( (! (var_1_28))) {
                   var_1_30 = (
                    ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))
  );
 }
                   if ( ((var_1_26) <= ( (~ ( ((var_1_25) & (var_1_33))))))) {
                    var_1_32 = (
                     ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))
  );
 }
                   if ( ((var_1_29) <= (var_1_26))) {
                    var_1_35 = (
   var_1_36
  );
 }
                   if ( ((var_1_34) <= (var_1_11))) {
                    var_1_37 = (
                     ((((( (( 32 ) - ( 2 )) )) < (( var_1_1 ))) ? (( (( 32 ) - ( 2 )) )) : (( var_1_1 ))))
  );
 } else {
                    if ( ((var_1_1) < (var_1_29))) {
                     var_1_37 = (
                      ((((( -8 )) < (( ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))) ))) ? (( -8 )) : (( ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1))) ))))
   );
  } else {
                     if ( (( ((var_1_25) * (var_1_33))) < (var_1_26))) {
                      var_1_37 = (
     var_1_1
    );
   } else {
                      var_1_37 = (
     var_1_38
    );
   }
  }
 }
                   if ( (( ((((((((64) < 0 ) ? -(64) : (64)))) < 0 ) ? -(((((64) < 0 ) ? -(64) : (64)))) : (((((64) < 0 ) ? -(64) : (64))))))) <= ( ((var_1_1) ^ ( ((var_1_11) % (var_1_40))))))) {
                    var_1_39 = (
                     ((
                      ((((((((( var_1_41 )) > (( var_1_42 ))) ? (( var_1_41 )) : (( var_1_42 ))))) < 0 ) ? -(((((( var_1_41 )) > (( var_1_42 ))) ? (( var_1_41 )) : (( var_1_42 ))))) : (((((( var_1_41 )) > (( var_1_42 ))) ? (( var_1_41 )) : (( var_1_42 )))))))
   ) + (
    var_1_43
   ))
  );
 } else {
                    if (var_1_36) {
                     var_1_39 = (
    var_1_42
   );
  }
 }
                   if ( ((var_1_43) < ( ((32.2) / (var_1_45))))) {
                    var_1_44 = (
   var_1_46
  );
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 254);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 127);
 assume_abort_if_not(var_1_16 <= 255);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 4294967294);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -32767);
 assume_abort_if_not(var_1_29 <= 32766);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 4294967295);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -126);
 assume_abort_if_not(var_1_34 <= 126);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_38 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_38 >= -32767);
 assume_abort_if_not(var_1_38 <= 32766);
 var_1_40 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_40 >= -2147483648);
 assume_abort_if_not(var_1_40 <= 2147483647);
 assume_abort_if_not(var_1_40 != 0);
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -461168.6018427383000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= -461168.6018427383000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
 assume_abort_if_not(var_1_45 != 0.0F);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_15 = var_1_15;
}
int property(void) {
 if ( ((last_1_var_1_15) <= (last_1_var_1_1))) {
 }
 if ( ((var_1_1) < (5))) {
 } else {
 }
 if (var_1_12) {
  if (var_1_13) {
   if ( (( ((var_1_4) > ( (~ (var_1_10))))) && (var_1_14))) {
   } else {
   }
  } else {
  }
 } else {
 }
 if ( ((var_1_6) <= ( (( (((((128)) > ((var_1_16))) ? ((128)) : ((var_1_16))))) - (var_1_17))))) {
 } else {
 }
 if ( (( (( ((200) << (var_1_1))) * ( ((var_1_17) * (var_1_7))))) < (var_1_15))) {
 }
 if (var_1_13) {
  if (var_1_14) {
   if (var_1_12) {
   }
  } else {
   if ( ((var_1_11) <= (0))) {
   } else {
   }
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
       last_1_var_1_15
      ) <= (
       last_1_var_1_1
      ))
     ) ? (
                                                     ((
       var_1_1
      ) == (
                                                      ((unsigned short int) (
                                                       ((((( ((((( last_1_var_1_15 )) < (( ((((( last_1_var_1_1 )) > (( var_1_4 ))) ? (( last_1_var_1_1 )) : (( var_1_4 )))) ))) ? (( last_1_var_1_15 )) : (( ((((( last_1_var_1_1 )) > (( var_1_4 ))) ? (( last_1_var_1_1 )) : (( var_1_4 )))) )))) )) > (( var_1_5 ))) ? (( ((((( last_1_var_1_15 )) < (( ((((( last_1_var_1_1 )) > (( var_1_4 ))) ? (( last_1_var_1_1 )) : (( var_1_4 )))) ))) ? (( last_1_var_1_15 )) : (( ((((( last_1_var_1_1 )) > (( var_1_4 ))) ? (( last_1_var_1_1 )) : (( var_1_4 )))) )))) )) : (( var_1_5 ))))
       ))
      ))
     ) : (
      1
     ))
    ) && (
                                         ((
                                               ((
       var_1_1
      ) < (
       5
      ))
     ) ? (
                                          ((
       var_1_6
      ) == (
                                           ((unsigned char) (
                                            ((((( ((((( ((((( var_1_7 )) < (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 )))) )) < (( var_1_9 ))) ? (( ((((( var_1_7 )) < (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 )))) )) : (( var_1_9 )))) )) > (( var_1_10 ))) ? (( ((((( ((((( var_1_7 )) < (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 )))) )) < (( var_1_9 ))) ? (( ((((( var_1_7 )) < (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 )))) )) : (( var_1_9 )))) )) : (( var_1_10 ))))
       ))
      ))
     ) : (
                                          ((
       var_1_6
      ) == (
                                           ((unsigned char) (
        var_1_10
       ))
      ))
     ))
    ))
   ) && (
                                         ((
     var_1_12
    ) ? (
                                         ((
      var_1_13
     ) ? (
                                          ((
                                                ((
                                                 ((
         var_1_4
        ) > (
                                                  (~ (
          var_1_10
         ))
        ))
       ) && (
        var_1_14
       ))
      ) ? (
                                           ((
        var_1_11
       ) == (
                                            ((signed short int) (
                                             ((((( var_1_8 )) > (( (( var_1_10 ) + ( var_1_6 )) ))) ? (( var_1_8 )) : (( (( var_1_10 ) + ( var_1_6 )) ))))
        ))
       ))
      ) : (
                                           ((
        var_1_11
       ) == (
                                            ((signed short int) (
         var_1_15
        ))
       ))
      ))
     ) : (
                                          ((
       var_1_11
      ) == (
                                           ((signed short int) (
        var_1_8
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_11
     ) == (
                                           ((signed short int) (
       var_1_15
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_6
    ) <= (
                                                ((
                                                 ((((( 128 )) > (( var_1_16 ))) ? (( 128 )) : (( var_1_16 ))))
     ) - (
      var_1_17
     ))
    ))
   ) ? (
                                         ((
     var_1_15
    ) == (
                                          ((signed long int) (
                                           ((((( (( var_1_5 ) - ( var_1_6 )) )) > (( ((((( var_1_8 )) < (( var_1_7 ))) ? (( var_1_8 )) : (( var_1_7 )))) ))) ? (( (( var_1_5 ) - ( var_1_6 )) )) : (( ((((( var_1_8 )) < (( var_1_7 ))) ? (( var_1_8 )) : (( var_1_7 )))) ))))
     ))
    ))
   ) : (
                                         ((
     var_1_15
    ) == (
                                          ((signed long int) (
      var_1_6
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
     ) << (
      var_1_1
     ))
    ) * (
                                                ((
      var_1_17
     ) * (
      var_1_7
     ))
    ))
   ) < (
    var_1_15
   ))
  ) ? (
                                        ((
    var_1_18
   ) == (
                                         ((double) (
     var_1_19
    ))
   ))
  ) : (
   1
  ))
 ))
) && (
                                      ((
  var_1_13
 ) ? (
                                       ((
   var_1_14
  ) ? (
                                        ((
    var_1_12
   ) ? (
                                         ((
     var_1_20
    ) == (
                                          ((float) (
                                           ((
       var_1_21
      ) + (
                                            ((((( var_1_22 )) > (( var_1_23 ))) ? (( var_1_22 )) : (( var_1_23 ))))
      ))
     ))
    ))
   ) : (
    1
   ))
  ) : (
                                        ((
                                               ((
     var_1_11
    ) <= (
     0
    ))
   ) ? (
                                         ((
     var_1_20
    ) == (
                                          ((float) (
      var_1_19
     ))
    ))
   ) : (
                                         ((
     var_1_20
    ) == (
                                          ((float) (
      var_1_22
     ))
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_20
  ) == (
                                        ((float) (
    var_1_23
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
