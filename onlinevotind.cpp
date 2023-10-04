#include <iostream>

using namespace std;

class Voting

{

        protected:

                string name;

                string voterid;

                string address;

        public:

                void getdata();

                virtual void voting();

                virtual void tot_votes();

                virtual string leading();

};

void Voting::getdata()

{

        cout<<"\nenter voter details:"<<endl;

        cout<<"\nenter name:"<<endl;

        cin>>name;

        cout<<"\nenter vote_id"<<endl;

        cin>>voterid;

        cout<<"\nenter address:"<<endl;

        cin>>address;

}

void Voting::voting()

{

}

void Voting::tot_votes()

{

}

string Voting::leading()

{

        return 0;

}

class National:public Voting

{

        string state;

        int AITC=0,BSP=0,BJP=0,CPI=0,INC=0,NCP=0;

        public:

                void getdata();

                void voting();

                void tot_votes();

                int leading();

};

void National::getdata()

{

        Voting::getdata();

        cout<<"\nenter state name:"<<endl;

        cin>>state;

}

void National::voting()

{

        int poll;

        cout<<"\nenter choice :"<<endl;

        cout<<"\n1.All India Trinamool Congress\n2.Bahujan Samaj Party\n3.Bharatiya Janata Party\n4.Communist Party of India\n5.Indian National Congress\n6.Nationalist Congress Party"<<endl;

        cin>>poll;

        switch(poll)

        {

                case 1:

                {

                        AITC++;

                        cout<<"\nvoted for All India Trinamool Congress"<<endl;

                        break;

                }

                case 2:

                {

                        BSP++;

                        cout<<"\nvoted for Bahujan Samaj Party"<<endl;

                        break;

                }

                case 3:

                {

                        BJP++;

                        cout<<"\nvoted for Bharatiya Janata Party"<<endl;

                        break;

                }

                case 4:

                {

                        CPI++;

                        cout<<"\nvoted for Communist Party of India"<<endl;

                        break;

                }

                case 5:

                {

                        INC++;

                        cout<<"\nvoted for Indian National Congress"<<endl;

                        break;

                }

                case 6:

                {

                        NCP++;

                        cout<<"\nvoted for Nationalist Congress Party"<<endl;

                        break;

                }

                default:

                {

                        cout<<"\nenter vaild choice:"<<endl;

                        cin>>poll;

                }

        }

        cout<<"\nyour Voting has completed"<<endl;

}

void National::tot_votes()

{

        cout<<"\ntotal Voting results:"<<endl;

        cout<<"for All India Trinamool Congress="<<AITC<<endl;

        cout<<"for Bahujan Samaj Party="<<BSP<<endl;

        cout<<"for Bharatiya Janata Party="<<BJP<<endl;

        cout<<"for Communist Party of India="<<CPI<<endl;

        cout<<"for Indian National Congress="<<INC<<endl;

        cout<<"for Nationalist Congress Party="<<NCP<<endl;

}

string National::leading()

{

        int votes[6] = {BSP, BJP, AITC, CPI, INC, NCP};

        int maximum = 0;

        for(int i = 0; i < 6; i++)

        {

                if(votes[i] > maximum)maximum = votes[i];

        }

        return maximum;

}

class State:public Voting

{

        string city;

        int JD=0,AAP=0,AIADMK=0,DMK=0,NPF=0,AIFC=0;

        public:

                void getdata();

                void voting();

                void tot_votes();

                int leading();

};

void State::getdata()

{

        Voting::getdata();

        cout<<"\nenter city name:"<<endl;

        cin>>city;

}

void State::voting()

{

        int poll;

        cout<<"\nenter choice :"<<endl;

        cout<<"\n1.Janata dal\n2.Aam Aadmi Party\n3.All India Anna Dravida Munnetra Kazhagam\n4.Dravida Munnetra Kazhagam\n5.Naga People's Front\n6.All India Forward Bloc"<<endl;

        cin>>poll;

        switch(poll)

        {

                case 1:

                {

                        JD++;

                        cout<<"\nvoted for Janata dal "<<endl;

                        break;

                }

                case 2:

                {

                        AAP++;

                        cout<<"\nvoted for Aam Aadmi Party "<<endl;

                        break;

                }

                case 3:

                {

                        AIADMK++;

                        cout<<"\nvoted for All India Anna Dravida Munnetra Kazhagam "<<endl;

                        break;

                }

                case 4:

                {

                        DMK++;

                        cout<<"\nvoted for Dravida Munnetra Kazhagam"<<endl;

                        break;

                }

                case 5:

                {

                        NPF++;

                        cout<<"\nvoted for Naga People's Front"<<endl;

                        break;

                }

                case 6:

                {

                        AIFC++;

                        cout<<"\nvoted for All India Forward Bloc"<<endl;

                        break;

                }

                default:

                {

                        cout<<"\nenter vaild choice:"<<endl;

                        cin>>poll;

                }

        }

        cout<<"\nyour Voting has completed"<<endl;

}

void State::tot_votes()

{

        cout<<"\ntotal Voting results:"<<endl;

        cout<<"for Janata dal ="<<JD<<endl;

        cout<<"for Aam Aadmi Party="<<AAP<<endl;

        cout<<"for All India Anna Dravida Munnetra Kazhagam ="<<AIADMK<<endl;

        cout<<"for Dravida Munnetra Kazhagam="<<DMK<<endl;

        cout<<"for Naga People's Front="<<NPF<<endl;

        cout<<"for All India Forward Bloc="<<AIFC<<endl;

}

string State::leading()

{

        int votes[6] = {JD, AAP, AIADMK, DMK, NPF, AIFC};

        int maximum = 0;

        for(int i = 0; i < 6; i++)

        {

                if(votes[i] > maximum)maximum = votes[i];

        }

        return maximum;

}

class Village:public Voting

{

        int CPI=0,CCPI=0,DMDK=0,IIDP=0,IJK=0,INL=0;

        string vill;

        public:

                void getdata();

                void voting();

                void tot_votes();

                int leading();

};

void Village::getdata()

{

        Voting::getdata();

        cout<<"\nenter village name:"<<endl;

        cin>>vill;

}

void Village::voting()

{

        int poll;

        cout<<"\nenter choice :"<<endl;

        cout<<"\n1.Communist Party of India\n2.Communist Party of India M\n3.Desiya Murpokku Dravida Kazhagam\n4.Indian Democratic Party\n5.Indian Jananayaka Katchi\n6.Indian National League"<<endl;

        cin>>poll;

        switch(poll)

        {

                case 1:

                {

                        CPI++;

                        cout<<"\nvoted for Communist Party of India"<<endl;

                        break;

                }

                case 2:

                {

                        CCPI++;

                        cout<<"\nvoted for Communist Party of India M"<<endl;

                        break;

                }

                case 3:

                {

                        DMDK++;

                        cout<<"\nvoted for Desiya Murpokku Dravida Kazhagam"<<endl;

                        break;

                }

                case 4:

                {

                        IIDP++;

                        cout<<"\nvoted for Indian Democratic Party"<<endl;

                        break;

                }

                case 5:

                {

                        IJK++;

                        cout<<"\nvoted for Indian Jananayaka Katchi"<<endl;

                        break;

                }

                case 6:

                {

                        INL++;

                        cout<<"\nvoted for Indian National League"<<endl;

                        break;

                }

                default:

                {

                        cout<<"\nenter vaild choice:"<<endl;

                        cin>>poll;

                }

        }

        cout<<"\nyour Voting has completed"<<endl;

}

void Village::tot_votes()

{

        cout<<"\ntotal Voting results:"<<endl;

        cout<<"for Communist Party of India="<<CPI<<endl;

        cout<<"for Communist Party of India M="<<CCPI<<endl;

        cout<<"for Desiya Murpokku Dravida Kazhagam="<<DMDK<<endl;

        cout<<"for Indian Democratic Party="<<IIDP<<endl;

        cout<<"for Indian Jananayaka Katchi="<<IJK<<endl;

        cout<<"for Indian National League="<<INL<<endl;

}

int Village::leading()

{

        int votes[6] = {CPI, CCPI, DMDK, IIDP, IJK, INL};

        int maximum = 0;

        for(int i = 0; i < 6; i++)

        {

                if(votes[i] > maximum)maximum = votes[i];

        }

        return maximum;

}

int main()

{

        int ch,n,choice,i;

        Voting *V;

        National N[100];

        State S[100];

        Village O[100];

        cout<<"\nenter your choice:"<<endl;

        cout<<"\n1. National\n2. State\n3. Village"<<endl;

        cin>>ch;

        switch(ch)

        {

                case 1:

                {

                        cout<<"\nenter no of voters"<<endl;

                        cin>>n;

                        for(i=0;i<n;i++)

                        {

                                V=&N[i];

                                N->getdata();

                                N->voting();

                                N->tot_votes();

                                N->leading();

                        }

                        break;

                }

                case 2:

                {

                        cout<<"\nenter no of voters"<<endl;

                        cin>>n;

                        for(i=0;i<n;i++)

                        {

                                V=&S[i];

                                S->getdata();

                                S->voting();

                                S->tot_votes();

                                S->leading();

                        }

                        break;

                }

                case 3:

                {

                        cout<<"\nenter no of voters"<<endl;

                        cin>>n;

                        for(i=0;i<n;i++)

                        {

                                V=&O[i];

                                O->getdata();

                                O->voting();

                                O->tot_votes();

                                O->leading();

                        }

                        break;

                }

                return 0;

        }

}
