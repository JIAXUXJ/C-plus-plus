#include <iostream>

using namespace std;

class Series{
    public:
        void initialSeq(int i);
        void subSeq(int a);
    private:
        int initialNum;
        int * seqPt = new int [initialNum];
};

void Series::initialSeq(int i){

    initialNum = i;
    cout << "please enter every number in this Sequence:";

    for(int j = 0; j < initialNum; j++){
        cin >> seqPt[j];
    }

}
void Series::subSeq(int a){

    int subSeqVal_[a];
    cout << "please enter every number in this Sequence:";

    for(int b = 0; b < a; b++){
        cin >> subSeqVal_[b];
    }


    bool found = false;
    for(int x = 0; x < initialNum; x++){
        if(subSeqVal_[0] == seqPt[x]){
            cout << "Output(first & last) " << x << endl;
            found = true;
        }
    }

    if(!found){
        cout << "-1" << endl;
    }

    for(int y = 0; y < initialNum; y++){
        if(seqPt[y] == subSeqVal_[a-1]){
            cout << "the lase number is " << y << endl;
        }
    }

    delete [] seqPt;
}

int main()
{
    int sizeSeq;
    cout << " please enter the size of initialSeq:";
    cin >> sizeSeq;
    Series newseries;
    newseries.initialSeq(sizeSeq);
    cout << "please enter the size of subSeq:";
    int sizeSubseq;
    cin >> sizeSubseq;
    newseries.subSeq(sizeSubseq);
    return 0;
}

