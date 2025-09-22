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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch109Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 2;
signed short int var_1_4 = 256;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 32;
unsigned char var_1_7 = 16;
unsigned char var_1_8 = 5;
unsigned char var_1_9 = 1;
signed long int var_1_10 = 64;
double var_1_11 = 63.5;
double var_1_12 = 63.5;
unsigned char var_1_13 = 1;
signed long int var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned long int var_1_16 = 8;
unsigned long int var_1_17 = 3232261878;
unsigned char var_1_18 = 32;
unsigned char var_1_19 = 128;
unsigned short int var_1_20 = 16;
unsigned char var_1_21 = 128;
unsigned short int var_1_22 = 128;
unsigned short int var_1_23 = 8;
unsigned short int var_1_24 = 10;
signed long int var_1_25 = 50;
unsigned short int var_1_26 = 128;
signed long int var_1_27 = 8;
signed long int var_1_28 = 4;
unsigned short int var_1_29 = 8;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
double var_1_32 = 50.55;
double var_1_33 = 99.3;
double var_1_34 = 2.5;
double var_1_35 = 4.7;
double var_1_36 = 25.125;
double var_1_37 = 1.875;
float var_1_38 = 256.5;
float var_1_39 = 9.25;
float var_1_40 = 64.8;
float var_1_41 = 8.4;
float var_1_42 = 31.5;
float var_1_43 = 7.4;
float var_1_44 = 128.55;
unsigned char var_1_45 = 10;
unsigned long int last_1_var_1_16 = 8;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = last_1_var_1_16;
                                          if ( (! (var_1_5))) {
                                           if ( (( ((var_1_8) >> (var_1_14))) <= (stepLocal_0))) {
                                            var_1_13 = (
    var_1_15
   );
  }
 }
                              if (var_1_13) {
                               var_1_10 = (
   var_1_8
  );
 } else {
                               var_1_10 = (
                                (((((((((( -4 ) + ( -32 ))) < 0 ) ? -((( -4 ) + ( -32 ))) : ((( -4 ) + ( -32 )))))) < 0 ) ? -((((((( -4 ) + ( -32 ))) < 0 ) ? -((( -4 ) + ( -32 ))) : ((( -4 ) + ( -32 )))))) : ((((((( -4 ) + ( -32 ))) < 0 ) ? -((( -4 ) + ( -32 ))) : ((( -4 ) + ( -32 ))))))))
  );
 }
             if (var_1_31) {
              if ( (( ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) <= (4.625))) {
               var_1_38 = (
    var_1_39
   );
  }
 }
                              var_1_6 = (
                               ((((( var_1_7 )) > (( (( (( 10 ) + ( var_1_8 )) ) + ( var_1_9 )) ))) ? (( var_1_7 )) : (( (( (( 10 ) + ( var_1_8 )) ) + ( var_1_9 )) ))))
 );
            var_1_27 = (
  var_1_23
 );
 signed long int stepLocal_1 = ((var_1_14) * (5));
                               if ( (( ((16) + ( ((var_1_6) * (var_1_8))))) <= (stepLocal_1))) {
                                var_1_18 = (
                                 ((
    var_1_19
   ) - (
    var_1_9
   ))
  );
 }
            if ( (( (((((var_1_23)) > ((var_1_24))) ? ((var_1_23)) : ((var_1_24))))) < (var_1_25))) {
             if ( ((var_1_23) == (var_1_24))) {
              var_1_22 = (
    var_1_26
   );
  }
 }
             if ( ((5) > (var_1_28))) {
              if ( (( (~ (var_1_28))) != ( ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))))) {
               if ( (( (((((((((var_1_32)) > ((var_1_33))) ? ((var_1_32)) : ((var_1_33))))) < 0 ) ? -((((((var_1_32)) > ((var_1_33))) ? ((var_1_32)) : ((var_1_33))))) : ((((((var_1_32)) > ((var_1_33))) ? ((var_1_32)) : ((var_1_33)))))))) <= ( ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))))) {
                var_1_29 = (
     var_1_26
    );
   } else {
                var_1_29 = (
     5
    );
   }
  } else {
               var_1_29 = (
    var_1_26
   );
  }
 } else {
              var_1_29 = (
   var_1_26
  );
 }
             if ( ((var_1_36) >= (var_1_35))) {
              var_1_40 = (
               ((
    var_1_41
   ) + (
                ((((( var_1_42 )) > (( var_1_43 ))) ? (( var_1_42 )) : (( var_1_43 ))))
   ))
  );
 }
                               var_1_20 = (
  var_1_19
 );
                               var_1_21 = (
  var_1_9
 );
             if ( ((var_1_32) > ( ((((((var_1_33) / (var_1_36))) < 0 ) ? -(((var_1_33) / (var_1_36))) : (((var_1_33) / (var_1_36)))))))) {
              var_1_35 = (
   var_1_37
  );
 }
                              if ( ((var_1_6) < (var_1_18))) {
                               var_1_1 = (
                                ((((( (( var_1_4 ) - ( 4 )) )) < (( var_1_18 ))) ? (( (( var_1_4 ) - ( 4 )) )) : (( var_1_18 ))))
  );
 } else {
                               if ( (( ((var_1_6) < (var_1_4))) || (var_1_13))) {
                                var_1_1 = (
    var_1_6
   );
  } else {
                                var_1_1 = (
    var_1_4
   );
  }
 }
                               if ( ((var_1_1) <= ( ((var_1_9) ^ (var_1_20))))) {
                                if (var_1_13) {
                                 var_1_11 = (
    var_1_12
   );
  }
 }
             if ( (( (( ((var_1_26) >> (1))) / (var_1_45))) >= (var_1_28))) {
              if (var_1_30) {
               var_1_44 = (
    var_1_41
   );
  }
 }
                               if (var_1_13) {
                                var_1_16 = (
                                 ((
    var_1_17
   ) - (
                                  ((((( var_1_9 )) > (( (( var_1_20 ) + ( var_1_14 )) ))) ? (( var_1_9 )) : (( (( var_1_20 ) + ( var_1_14 )) ))))
   ))
  );
 } else {
                                if ( (( (((((5u)) < ((var_1_10))) ? ((5u)) : ((var_1_10))))) > (var_1_14))) {
                                 var_1_16 = (
    var_1_7
   );
  } else {
                                 var_1_16 = (
    var_1_17
   );
  }
 }
             if ( ((var_1_25) <= ( ((var_1_26) & (var_1_24))))) {
              var_1_28 = (
               ((((( ((((((((( var_1_26 )) > (( 5 ))) ? (( var_1_26 )) : (( 5 ))))) < 0 ) ? -(((((( var_1_26 )) > (( 5 ))) ? (( var_1_26 )) : (( 5 ))))) : (((((( var_1_26 )) > (( 5 ))) ? (( var_1_26 )) : (( 5 ))))))) )) > (( (( var_1_22 ) - ( var_1_24 )) ))) ? (( ((((((((( var_1_26 )) > (( 5 ))) ? (( var_1_26 )) : (( 5 ))))) < 0 ) ? -(((((( var_1_26 )) > (( 5 ))) ? (( var_1_26 )) : (( 5 ))))) : (((((( var_1_26 )) > (( 5 ))) ? (( var_1_26 )) : (( 5 ))))))) )) : (( (( var_1_22 ) - ( var_1_24 )) ))))
  );
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -1);
 assume_abort_if_not(var_1_4 <= 32766);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 63);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 127);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 7);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 2147483647);
 assume_abort_if_not(var_1_17 <= 4294967294);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 127);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 65535);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 65535);
 var_1_25 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_25 >= -2147483648);
 assume_abort_if_not(var_1_25 <= 2147483647);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 65534);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 assume_abort_if_not(var_1_36 != 0.0F);
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= -922337.2036854766000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= -461168.6018427383000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= -461168.6018427383000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 255);
 assume_abort_if_not(var_1_45 != 0);
}
void updateLastVariables(void) {
 last_1_var_1_16 = var_1_16;
}
int property(void) {
 if ( ((var_1_6) < (var_1_18))) {
 } else {
  if ( (( ((var_1_6) < (var_1_4))) || (var_1_13))) {
  } else {
  }
 }
 if (var_1_13) {
 } else {
 }
 if ( ((var_1_1) <= ( ((var_1_9) ^ (var_1_20))))) {
  if (var_1_13) {
  }
 }
 if ( (! (var_1_5))) {
  if ( (( ((var_1_8) >> (var_1_14))) <= (last_1_var_1_16))) {
  }
 }
 if (var_1_13) {
 } else {
  if ( (( (((((5u)) < ((var_1_10))) ? ((5u)) : ((var_1_10))))) > (var_1_14))) {
  } else {
  }
 }
 if ( (( ((16) + ( ((var_1_6) * (var_1_8))))) <= ( ((var_1_14) * (5))))) {
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
          var_1_6
         ) < (
          var_1_18
         ))
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((signed short int) (
                                               ((((( (( var_1_4 ) - ( 4 )) )) < (( var_1_18 ))) ? (( (( var_1_4 ) - ( 4 )) )) : (( var_1_18 ))))
          ))
         ))
        ) : (
                                             ((
                                                   ((
                                                    ((
            var_1_6
           ) < (
            var_1_4
           ))
          ) || (
           var_1_13
          ))
         ) ? (
                                              ((
           var_1_1
          ) == (
                                               ((signed short int) (
            var_1_6
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
        ))
       ) && (
                                            ((
         var_1_6
        ) == (
                                             ((unsigned char) (
                                              ((((( var_1_7 )) > (( (( (( 10 ) + ( var_1_8 )) ) + ( var_1_9 )) ))) ? (( var_1_7 )) : (( (( (( 10 ) + ( var_1_8 )) ) + ( var_1_9 )) ))))
         ))
        ))
       ))
      ) && (
                                           ((
        var_1_13
       ) ? (
                                            ((
         var_1_10
        ) == (
                                             ((signed long int) (
          var_1_8
         ))
        ))
       ) : (
                                            ((
         var_1_10
        ) == (
                                             ((signed long int) (
                                              (((((((((( -4 ) + ( -32 ))) < 0 ) ? -((( -4 ) + ( -32 ))) : ((( -4 ) + ( -32 )))))) < 0 ) ? -((((((( -4 ) + ( -32 ))) < 0 ) ? -((( -4 ) + ( -32 ))) : ((( -4 ) + ( -32 )))))) : ((((((( -4 ) + ( -32 ))) < 0 ) ? -((( -4 ) + ( -32 ))) : ((( -4 ) + ( -32 ))))))))
         ))
        ))
       ))
      ))
     ) && (
                                           ((
                                                 ((
        var_1_1
       ) <= (
                                                  ((
         var_1_9
        ) ^ (
         var_1_20
        ))
       ))
      ) ? (
                                            ((
        var_1_13
       ) ? (
                                             ((
         var_1_11
        ) == (
                                              ((double) (
          var_1_12
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
                                                            (! (
       var_1_5
      ))
     ) ? (
                                                      ((
                                                             ((
                                                              ((
         var_1_8
        ) >> (
         var_1_14
        ))
       ) <= (
        last_1_var_1_16
       ))
      ) ? (
                                                       ((
        var_1_13
       ) == (
                                                        ((unsigned char) (
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
     var_1_13
    ) ? (
                                          ((
      var_1_16
     ) == (
                                           ((unsigned long int) (
                                            ((
        var_1_17
       ) - (
                                             ((((( var_1_9 )) > (( (( var_1_20 ) + ( var_1_14 )) ))) ? (( var_1_9 )) : (( (( var_1_20 ) + ( var_1_14 )) ))))
       ))
      ))
     ))
    ) : (
                                          ((
                                                 ((
                                                  ((((( 5u )) < (( var_1_10 ))) ? (( 5u )) : (( var_1_10 ))))
      ) > (
       var_1_14
      ))
     ) ? (
                                           ((
       var_1_16
      ) == (
                                            ((unsigned long int) (
        var_1_7
       ))
      ))
     ) : (
                                           ((
       var_1_16
      ) == (
                                            ((unsigned long int) (
        var_1_17
       ))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                ((
      16
     ) + (
                                                 ((
       var_1_6
      ) * (
       var_1_8
      ))
     ))
    ) <= (
                                                ((
      var_1_14
     ) * (
      5
     ))
    ))
   ) ? (
                                         ((
     var_1_18
    ) == (
                                          ((unsigned char) (
                                           ((
       var_1_19
      ) - (
       var_1_9
      ))
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                       ((
   var_1_20
  ) == (
                                        ((unsigned short int) (
    var_1_19
   ))
  ))
 ))
) && (
                                      ((
  var_1_21
 ) == (
                                       ((unsigned char) (
   var_1_9
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
