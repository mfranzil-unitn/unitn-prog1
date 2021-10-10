
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// %%% Estratto dalla prova d'esame di uno studente, 20/2/2014
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

(...)
// RS: cosa vorrebbe essere questa indentazione, 
// una composizione artistica dadaista?

void   print  (const stack &s)
{
        node * first= s;
        while(first!=NULL)
        {
                cout<<first->val;
                }
                first=first->next;
        }
        retval shrink (stack &s)
        {
                retval res;
                if(empty(s))
                {res=FALSE;
                        }
                        else
                        {node* first=s;
                                s=s->next;
                                delete first;
                                res=TRUE;
                                }
                                return res;
                }
                void   deinit (stack &s)
                {
                        do{
                        node * first=s;
                        s=s->next;
                        delete first;
                        }
                        while(first!=NULL);
                        }

(...)
