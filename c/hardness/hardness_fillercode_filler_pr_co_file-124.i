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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch124Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 8;
signed long int var_1_2 = -4;
signed long int var_1_3 = 2;
signed long int var_1_4 = 16;
signed long int var_1_5 = -16;
signed long int var_1_6 = 8;
signed long int var_1_7 = 128;
signed long int var_1_8 = 16;
signed short int var_1_9 = 2;
signed short int var_1_10 = 10;
signed short int var_1_12 = 128;
signed short int var_1_13 = 256;
signed short int var_1_14 = -10;
signed long int var_1_15 = 16;
signed char var_1_16 = -16;
signed char var_1_17 = 32;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
signed short int var_1_22 = 0;
signed short int var_1_23 = 10;
signed short int var_1_24 = 32;
unsigned long int var_1_25 = 200;
unsigned long int var_1_26 = 32;
unsigned long int var_1_27 = 0;
unsigned short int var_1_28 = 2;
double var_1_29 = 10.35;
double var_1_31 = 3.75;
unsigned short int var_1_32 = 2;
unsigned short int var_1_33 = 50;
signed long int var_1_34 = 100000;
signed long int var_1_36 = 16;
unsigned long int var_1_37 = 10;
unsigned long int var_1_38 = 0;
double var_1_39 = 0.3;
double var_1_40 = 4.5;
unsigned long int var_1_41 = 0;
unsigned char var_1_42 = 64;
unsigned char var_1_43 = 64;
signed short int last_1_var_1_10 = 10;
signed long int last_1_var_1_15 = 16;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_3 = last_1_var_1_10;
                                            if ( ((stepLocal_3) == ( ((last_1_var_1_15) ^ (var_1_4))))) {
                                             var_1_18 = (
                                              ((
                                               (! (
                                                ((
      var_1_19
     ) || (
      var_1_20
     ))
    ))
   ) && (
    var_1_21
   ))
  );
 }
                  if ( ((var_1_25) <= (var_1_26))) {
                   if ( ((-25) <= (var_1_25))) {
                    var_1_28 = (
                     ((((32) < 0 ) ? -(32) : (32)))
   );
  } else {
                    var_1_28 = (
    50
   );
  }
 }
                   if ( (( (- (var_1_29))) == (var_1_31))) {
                    var_1_32 = (
                     ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))
  );
 } else {
                    if ( (( ((((128) < 0 ) ? -(128) : (128)))) >= (var_1_33))) {
                     var_1_32 = (
                      ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))
   );
  }
 }
                   if (var_1_18) {
                    if (var_1_18) {
                     var_1_34 = (
                      ((((( var_1_26 )) > (( var_1_15 ))) ? (( var_1_26 )) : (( var_1_15 ))))
   );
  } else {
                     if ( (( (( ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) - ( (((((var_1_27)) > ((var_1_15))) ? ((var_1_27)) : ((var_1_15))))))) > ( ((5u) % (var_1_37))))) {
                      var_1_34 = (
     var_1_36
    );
   }
  }
 }
                                if (var_1_18) {
                                 var_1_22 = (
                                  ((
    var_1_12
   ) - (
                                   ((
     var_1_23
    ) + (
                                    ((
      8
     ) + (
      var_1_24
     ))
    ))
   ))
  );
 } else {
                                 if (var_1_18) {
                                  var_1_22 = (
                                   ((
                                    ((
      var_1_23
     ) + (
      4
     ))
    ) - (
     var_1_24
    ))
   );
  } else {
                                  var_1_22 = (
    var_1_23
   );
  }
 }
                                if ( ((var_1_22) <= (var_1_3))) {
                                 if (var_1_18) {
                                  var_1_10 = (
                                   ((
     var_1_12
    ) - (
     var_1_13
    ))
   );
  }
 }
                                var_1_15 = (
                                 ((((( var_1_22 )) > (( ((((( var_1_12 )) < (( (( var_1_13 ) - ( 1 )) ))) ? (( var_1_12 )) : (( (( var_1_13 ) - ( 1 )) )))) ))) ? (( var_1_22 )) : (( ((((( var_1_12 )) < (( (( var_1_13 ) - ( 1 )) ))) ? (( var_1_12 )) : (( (( var_1_13 ) - ( 1 )) )))) ))))
 );
 signed long int stepLocal_2 = (( (((((var_1_6)) > ((var_1_7))) ? ((var_1_6)) : ((var_1_7))))) - (var_1_8));
 signed long int stepLocal_1 = ((-10) * (var_1_5));
 signed long int stepLocal_0 = -32;
                                if ( ((stepLocal_0) >= ( (( ((var_1_2) / (var_1_3))) ^ (var_1_4))))) {
                                 if ( (( (( ((var_1_4) * (var_1_3))) + ( ((var_1_2) + (var_1_5))))) >= (stepLocal_2))) {
                                  if ( (( (- (var_1_2))) > (stepLocal_1))) {
                                  var_1_1 = (
     var_1_9
    );
   } else {
                                   var_1_1 = (
     -16
    );
   }
  } else {
                                  var_1_1 = (
    var_1_9
   );
  }
 } else {
                                 var_1_1 = (
   var_1_9
  );
 }
                   var_1_41 = (
  var_1_33
 );
                                if ( (( (~ (var_1_7))) != ( ((var_1_15) ^ (var_1_3))))) {
                                 var_1_14 = (
   var_1_9
  );
 }
                  var_1_25 = (
                   ((
   16u
  ) + (
                    (((((( var_1_26 ) + ( var_1_27 ))) < 0 ) ? -((( var_1_26 ) + ( var_1_27 ))) : ((( var_1_26 ) + ( var_1_27 )))))
  ))
 );
                   if (var_1_18) {
                    if ( ((var_1_26) <= ( (((((var_1_25)) > ((var_1_15))) ? ((var_1_25)) : ((var_1_15))))))) {
                     if ( ((var_1_25) <= (var_1_27))) {
                      var_1_29 = (
     var_1_31
    );
   }
  } else {
                     var_1_29 = (
    var_1_31
   );
  }
 }
                                var_1_16 = (
  var_1_17
 );
                   if ( (( (( ((var_1_39) - (var_1_40))) + (var_1_31))) >= (var_1_29))) {
                    var_1_38 = (
                     (((((( (( 3426058817u ) - ( var_1_27 )) ) - ( var_1_15 ))) < 0 ) ? -((( (( 3426058817u ) - ( var_1_27 )) ) - ( var_1_15 ))) : ((( (( 3426058817u ) - ( var_1_27 )) ) - ( var_1_15 )))))
  );
 }
                   var_1_42 = (
  var_1_43
 );
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 assume_abort_if_not(var_1_3 != 0);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -32767);
 assume_abort_if_not(var_1_9 <= 32766);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -127);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 16383);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 8191);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 1073741824);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 1073741823);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 65534);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= -1073741823);
 assume_abort_if_not(var_1_36 <= 1073741823);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 4294967295);
 assume_abort_if_not(var_1_37 != 0);
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_15 = var_1_15;
}
int property(void) {
 if ( ((-32) >= ( (( ((var_1_2) / (var_1_3))) ^ (var_1_4))))) {
  if ( (( (( ((var_1_4) * (var_1_3))) + ( ((var_1_2) + (var_1_5))))) >= ( (( (((((var_1_6)) > ((var_1_7))) ? ((var_1_6)) : ((var_1_7))))) - (var_1_8))))) {
   if ( (( (- (var_1_2))) > ( ((-10) * (var_1_5))))) {
   } else {
   }
  } else {
  }
 } else {
 }
 if ( ((var_1_22) <= (var_1_3))) {
  if (var_1_18) {
  }
 }
 if ( (( (~ (var_1_7))) != ( ((var_1_15) ^ (var_1_3))))) {
 }
 if ( ((last_1_var_1_10) == ( ((last_1_var_1_15) ^ (var_1_4))))) {
 }
 if (var_1_18) {
 } else {
  if (var_1_18) {
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
        -32
       ) >= (
                                                ((
                                                 ((
          var_1_2
         ) / (
          var_1_3
         ))
        ) ^ (
         var_1_4
        ))
       ))
      ) ? (
                                            ((
                                                 ((
                                                  ((
                                                   ((
           var_1_4
          ) * (
           var_1_3
          ))
         ) + (
                                                   ((
           var_1_2
          ) + (
           var_1_5
          ))
         ))
        ) >= (
                                                  ((
                                                   ((((( var_1_6 )) > (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))
         ) - (
          var_1_8
         ))
        ))
       ) ? (
                                             ((
                                                  ((
                                                   (- (
           var_1_2
          ))
         ) > (
                                                   ((
           -10
          ) * (
           var_1_5
          ))
         ))
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((signed short int) (
           var_1_9
          ))
         ))
        ) : (
                                              ((
          var_1_1
         ) == (
                                               ((signed short int) (
           -16
          ))
         ))
        ))
       ) : (
                                             ((
         var_1_1
        ) == (
                                              ((signed short int) (
          var_1_9
         ))
        ))
       ))
      ) : (
                                            ((
        var_1_1
       ) == (
                                             ((signed short int) (
         var_1_9
        ))
       ))
      ))
     ) && (
                                           ((
                                                  ((
        var_1_22
       ) <= (
        var_1_3
       ))
      ) ? (
                                            ((
        var_1_18
       ) ? (
                                             ((
         var_1_10
        ) == (
                                              ((signed short int) (
                                               ((
           var_1_12
          ) - (
           var_1_13
          ))
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
                                                  (~ (
        var_1_7
       ))
      ) != (
                                                  ((
        var_1_15
       ) ^ (
        var_1_3
       ))
      ))
     ) ? (
                                           ((
       var_1_14
      ) == (
                                            ((signed short int) (
        var_1_9
       ))
      ))
     ) : (
      1
     ))
    ))
   ) && (
                                         ((
     var_1_15
    ) == (
                                          ((signed long int) (
                                           ((((( var_1_22 )) > (( ((((( var_1_12 )) < (( (( var_1_13 ) - ( 1 )) ))) ? (( var_1_12 )) : (( (( var_1_13 ) - ( 1 )) )))) ))) ? (( var_1_22 )) : (( ((((( var_1_12 )) < (( (( var_1_13 ) - ( 1 )) ))) ? (( var_1_12 )) : (( (( var_1_13 ) - ( 1 )) )))) ))))
     ))
    ))
   ))
  ) && (
                                        ((
    var_1_16
   ) == (
                                         ((signed char) (
     var_1_17
    ))
   ))
  ))
 ) && (
                                                   ((
                                                          ((
    last_1_var_1_10
   ) == (
                                                           ((
     last_1_var_1_15
    ) ^ (
     var_1_4
    ))
   ))
  ) ? (
                                                    ((
    var_1_18
   ) == (
                                                     ((unsigned char) (
                                                      ((
                                                       (! (
                                                        ((
        var_1_19
       ) || (
        var_1_20
       ))
      ))
     ) && (
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
  var_1_18
 ) ? (
                                       ((
   var_1_22
  ) == (
                                        ((signed short int) (
                                         ((
     var_1_12
    ) - (
                                           ((
      var_1_23
     ) + (
                                            ((
       8
      ) + (
       var_1_24
      ))
     ))
    ))
   ))
  ))
 ) : (
                                        ((
   var_1_18
  ) ? (
                                         ((
    var_1_22
   ) == (
                                          ((signed short int) (
                                           ((
                                            ((
       var_1_23
      ) + (
       4
      ))
     ) - (
      var_1_24
     ))
    ))
   ))
  ) : (
                                         ((
    var_1_22
   ) == (
                                          ((signed short int) (
     var_1_23
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
