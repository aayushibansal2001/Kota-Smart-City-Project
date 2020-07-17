#include<iostream>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

//**********************TOURISM module***********************//

class tourism{       //class for introduction to Kota and classification of tourist attractions
public:
    void intro();
    void tourist_attractions();

};
class list{  //Abstract class
protected:
    string timings;  //string datatype from string header file
    int entry_fee;
public:
    virtual void display()=0;  //Pure Virtual function
    };
void tourism::intro()
{
    cout<<"With history, culture, cuisine, nature and heritage, Kota has a lot on offer for your perusal."
    " The desert city cites an attractive historical beginning and has seen a lot of valour, majesty,"
    " courtliness and grandeur, etching India’s glorious monarchy. Proud Rajput kings once ruled over western"
    " India adding to this country’s glory and richness. Kota is within the Hadoti region located in the south"
    " eastern part of Rajasthan. The River Chambal cools the town as it flows through it. In the 17th century"
    " Kota region a section of Hadoti was gifted to Madho Singh a deserving prince, and Kota attained the"
    " prestigious Rajput hallmark of gallantry and Rajputana culture.\n The best time to visit Kota is from October to March"<<endl<<endl;

}
void tourism::tourist_attractions()
{
    cout<<" TOURIST ATTRACTIONS IN KOTA"<<endl;
    cout<<"1. Forts and Palaces"<<endl;
    cout<<"2. Gardens"<<endl;
    cout<<"3. Temples"<<endl;
    cout<<"4. Museums"<<endl;
    cout<<"5. Lakes & Waterfalls"<<endl;
}

class forts_and_palaces:public list  //Hierarchical inheritance
{ public:
    void display()
    {            //It refreshes the screen and clears the terminal.
        cout<<"FORTS AND PALACES IN KOTA"<<endl;
        cout<<"1. Kotah Garh City Palace"<<endl;
        cout<<"2. Jagmandir Palace"<<endl;
        cout<<"3. Raniji Ki Baoli"<<endl;
        cout<<"4. Abheda Mahal"<<endl;
        cout<<"5. Umed Bhawan"<<endl;
    }
    void CityPalace()
    {
        system("cls");
        cout<<"An Overview of Kotah Garh City Palace"<<endl<<endl;
        cout<<"A confabulation of Mughal and Rajasthani architecture and art, the City Palace is a monument "
        "of the glorious royal past of the Kota city. City palace is a fantastic landmark in Kota attracting"
        " thousands of tourists every year.\n\n"
        "The palace is adorned with imposing wall paintings, mirror walls, mirror ceilings, hanging illuminated "
        "lights and floral decorations. Breathtaking marble floorings and walls and stylish fashioned entrance,"
        " all these make City Palace a memorable location. The attractive garden around the palace adds the beauty"
        " of the Palace. City Palace encloses a grand museum enclosing huge collection of medieval weaponries, "
        "costumes and apparels of erstwhile kings and queens, artifacts and handicrafts showing the cultural "
        "heritage of the bygone splendid days."<<endl<<endl;
        cout<<"It is 5 km from city center"<<endl<<endl;
        cout<<"Popular for: History Buffs & Experience Seekers"<<endl<<endl;
        timings="All days of the week; 10:00 AM - 5:00 PM";
        cout<<"Timings: "<<timings<<endl<<endl;
        entry_fee=10;
        cout<<"Entry Fee : INR "<<entry_fee<<endl<<endl;
        cout<<"Things to do around City Palace: \n Sahkari Bazaar \n Chambal River Cruise \n Chopati Bazzar \n Sawan Puhar Waterpark \n Central Square Mall"<<endl<<endl;
        cout<<"Restaurants near City Palace: "<<endl;
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tKota's Zaika\t\t\tNayapura, Hotel Saraswati Palace, Near Ratan Kachori and sweets"<<endl;
        cout<<"\tKota castle restaurant\t\t hn 29 cenal road land mark city opp to shri hari hospital"<<endl;
        cout<<"\tThe Highway King\t\tNear St. John's School, Gyan Sarovar Kunhadi, Kota, Rajasthan 324008"<<endl<<endl;


}
void JagmandirPalace()
    {
        system("cls");
        cout<<"An Overview of Jagmandir Palace"<<endl<<endl;
        cout<<"This is one of the most popular destinations in Kota. Located in the middle of Kishor Sagar Lake"
        " in Kota, one can scarcely believe at the marvellous engineering which made this creation possible."
        " Built in the 1740s by one of the queens of Kota, Jagmandir Palace was once a summer retreat for the"
        " rulers of Kota, with the pristine waters of Kishore Sagar Lake inviting scores of tourists to the same."<<endl<<endl;
        cout<<"4 km from city center"<<endl<<endl;
        cout<<"Popular for: History Buffs, God Lovers and Photo Fanatics"<<endl<<endl;
        timings="All days of the week; 10:00 AM - 6:00 PM";
        cout<<"Timings: "<<timings<<endl<<endl;
        entry_fee=325;
        cout<<"Entry Fee:\n INR "<<entry_fee<<" per person Adult(for 1 hour boat ride)"<<endl;
        entry_fee=165;  //reassignment of entry fee
        cout<<" INR "<<entry_fee<<" per person Child(for 1 hour boat ride)"<<endl;
        entry_fee=225;
        cout<<" INR "<<entry_fee<<" per person Adult(for 30-minute boat ride)"<<endl;
        entry_fee=115;
        cout<<" INR "<<entry_fee<<" per person Child(for 30-minute boat ride)"<<endl<<endl;
        cout<<"Things to do around Jagmandir Palace:\n Central Square Mall \n Swarn Rajat Market \n Jawahar Market"<<endl<<endl;
        cout<<"Restaurants near Jagmandir Palace:\n";
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tSwagat Restaurant\t\tSurya Royal Hotel, 11, Jhalawar Road"<<endl;
        cout<<"\tEatos Restaurant\t\t12-C, Nursery Scheme, Talwandi, Kota-5, Kota-Rajasthan 324004, India"<<endl<<endl;
}
void RanijiKiBaoli()
{
    system("cls");
    cout<<"An Overview of Raniji Ki Baoli"<<endl<<endl;
    cout<<"Raniji Ki Baoli is an ancient baoli (stepwell) near Kota in Bundi. It was built by the Rajputs and "
    "boasts of a striking architecture. The baoli has a narrow gateway lined with four sturdy pillars and slender "
    "arched on the high roof. A flight of stairs descend into a part well, part temple and part palace with scarce "
    "water reserves. Raniji Ki Baoli is an important heritage monument of the city."<<endl<<endl;
    cout<<"It is 34 km from city center."<<endl<<endl;
    cout<<"Popular for: Historic Places"<<endl<<endl;
    timings="All days of the week; 10:00 AM - 5:00 PM";
    cout<<"Timings: "<<timings<<endl<<endl;
    entry_fee=0;
    cout<<"Entry Fee: INR "<<entry_fee<<endl<<endl;
    cout<<"Things to do near Raniji ki Baoli: \n Aquagreens Waterpark \n City Mall \n Radhika Resort and Waterpark \n Ahluwalias's The Great Mall of Kota"<<endl<<endl;
    cout<<"Restaurants near Raniji ki Baoli:\n";
    cout<<"\t\tName\t\t\t\tAddress"<<endl;
    cout<<"\tIcon Garden Restaurant\t\tResort Exotika NH12,Bundi Road"<<endl;
    cout<<"\tDaniel's Food\t\t\tKunhari, Electricity Board Area, Kota, Rajasthan Opp Allen Sangyan"<<endl;
    cout<<"\tJodhpur Restaurant\t\tRawat Bhata Road, Kota, Rajasthan"<<endl<<endl;
}

void AbhedaMahal()
    {
        system("cls");
        cout<<"An Overview of Abheda Mahal"<<endl<<endl;
        cout<<"Abheda Mahal is situated near the Chambal river of Kota. The palace was established by Ummed Maharaj,"
        "and it has a great history and many different stories behind it's establishment. The palace has a pond which"
        " houses beautiful lotus flowers, turtles. It is said that earlier this pond also contained many crocodiles. The"
        " palace has a great architecture and is a perfect place for picnic and for photography. The palace image falls on the "
        "water in the pond which reflects it's image which gives a great view."<<endl<<endl;
        cout<<"Popular for: History Buffs"<<endl<<endl;
        timings="All days of the week; 10:00 AM - 5:00 PM";
        cout<<"Timings: "<<timings<<endl<<endl;
        entry_fee=20;
        cout<<"Entry Fee : \n For Indians: INR "<<entry_fee<<"/- per head "<<endl;
        entry_fee=40;
         cout<<" For Foreign Nationals: INR "<<entry_fee<<"/- per head"<<endl<<endl;
        cout<<"Things to do around Abheda Mahal: \n Lakshman Jhoola \n Purana Cinema Hall \n Hanuman Mandir "<<endl<<endl;
        cout<<"Restaurants near Abheda Mahal: "<<endl;
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tTamku Restaurant\t\t\tKota, Rajasthan 323021"<<endl;
        cout<<"\tHariyali Garden restaurant\t\t Sawan Phuhar water park ,Bundi road,NH-12,Kota, Kota, Rajasthan, India"<<endl;
        cout<<"\tFlavour Restaurant\t\t\tOm Cineplex, 11, Indra Vihar Opera Hospital Road, Kota, India"<<endl<<endl;
    }
void UmedBhawan()
    {
        system("cls");
        cout<<"An Overview of Umed Bhawan"<<endl<<endl;
        cout<<"Displaying a blend of Rajput and Victorian architecture, Umed Bhawan Palace has an aura of its own. "
        "This beautiful palace was built in 1009 by Maharao Umed Singh II of Kota. Green lawns, huge courtyards, "
        "picturesque ceilings, marble corridors, hunting trophies of yesteryears are the special features of the palace. "
        "The palace has 32 huge rooms replete with modern amenities. Umed Bhawan Palace strikes a stark balance with "
        "contemporary living and Rajasthan's culture."<<endl<<endl;
        cout<<"Popular for: Architectural and historical heritage"<<endl<<endl;
        timings="All days of the week; 9:00 AM - 5:00 PM";
        cout<<"Timings: "<<timings<<endl<<endl;
        entry_fee=30;
        cout<<"Entry Fee : \n For Indians: INR "<<entry_fee<<"/- per head "<<endl;
        entry_fee=100;
         cout<<" For Foreign Nationals: INR "<<entry_fee<<"/- per head"<<endl<<endl;
        cout<<"Things to do around Umed Bhawan: \n Kotsa- Travellers Gallery \n Ganesh Handicrafts \n Baba Art Emporium \n Rao Jodha Desert Rock Park"<<endl<<endl;
        cout<<"Restaurants near Umed Bhawan: "<<endl;
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tDylan Cafe Restaurant\t\tGulab Sagar Baccha, Hanuman ji ki Gali Gulab Sagar"<<endl;
        cout<<"\tKarni Bhawan Restaurant\t\t Palace Road, Karni Bhawan Hotel, Ratananda"<<endl;
        cout<<"\tPachranga\t\t\tCircuit House Road Ranbanka Palace"<<endl<<endl;


}

};
class gardens:public list //Hierarchical inheritance
{
public:
    void display()
    {
        cout<<"GARDENS IN KOTA"<<endl;
        cout<<"1. Seven Wonders Park"<<endl;
        cout<<"2. Chambal Gardens"<<endl;
        cout<<"3. Kota Zoological Park"<<endl;
        cout<<"4. Chatra Vilas Garden"<<endl;
        cout<<"5. Darrah Wildlife Sanctuary"<<endl;
        cout<<"6. Lucky Burj Garden"<<endl;
    }
    void SevenWondersPark()
{
    system("cls");
    cout<<"An Overview of Seven Wonders Park"<<endl<<endl;
    cout<<"Seven Wonders Park in Kota comprises of miniatures of all the Seven Wonders of the World."
     "These include Taj Mahal, Great Pyramid, Eiffel Tower, Leaning Tower, Christ the Redeemer of Brazil,"
     " Colosseum, and Statue of Liberty. These miniatures have been built on the bank of the Kishore Sagar"
     " Lake thereby enhancing its beauty. The park was built at a mind-blowing cost of 20 crores by the Urban"
     " Development Department."<<endl<<endl;
     cout<<"Ranked 2 out of many sightseeing in Kota"<<endl<<endl;
     cout<<"Situated in: Ballabhbari"<<endl<<endl;
     timings="All days of the week; 2:00 PM - 8:30 PM";
     cout<<"Timings: "<<timings<<endl<<endl;
     entry_fee=0;
     cout<<"Entry fee: INR "<<entry_fee<<endl<<endl;
     cout<<"Best time to visit: During sunset"<<endl<<endl;
     cout<<"Facilities available: Food available for purchase, bathroom facilities, camera allowed"<<endl<<endl;
     cout<<"Restaurants near Seven Wonder's Park:\n"<<endl;
     cout<<"\t\tName\t\t\t\tAddress"<<endl;
     cout<<"\tThe Right Place Cafe\t\tC-11, Vallabh Bari Opposite 7 Wonders Park"<<endl;
     cout<<"\tIndish Resto And Cafe\t\t72 Shopping Centre, Opposite Of Rotary Binani Sabhagar"<<endl;
     cout<<"\tSheesha Restaurant\t\tKotri Rd Police Chowki, Gumanpura"<<endl<<endl;
}
void ChambalGardens()
{
    system("cls");
    cout<<"An Overview of Chambal Gardens"<<endl<<endl;
    cout<<"Chambal Garden is located in Amar Niwas on the banks of Chambal River. It is an attraction in Kota"
    " and draws tourists from all over the world. At the centre of the beautifully landscaped garden is a pond"
    " which is home to several Gharials.A suspension bridge in the garden is an excellent way to explore "
    "specific regions of the landscaped beauty. Chambal Garden has also been featured in a Hollywood Blockbuster,"
    " 'Badrinath ki Dulhaniya'."<<endl<<endl;
    cout<<"It is 7 km from city center."<<endl<<endl;
    timings="All days of the week; 10:00 AM - 7:00 PM";
    cout<<"Timings: "<<timings<<endl<<endl;
    entry_fee=0;
    cout<<"Entry fee: INR "<<entry_fee<<endl<<endl;
    cout<<"Major attractions at Chambal Garden:\n"<<endl;
    cout<<"Children's play area- \n A special play area is a favourite amongst children which has several,"
    " rides, slides, swings and a jungle gym. There is also a suspension bridge that the kids love a lot."<<endl;
    cout<<"Toy Train- \n A toy train runs all across the garden. It is a fun way to explore the beautifully landscaped garden."<<endl;
    cout<<"Boating- \n Visitors can go boating on a serene boat ride in the pond at a minimal rate of INR 50 per person."<<endl;
    cout<<"Crocodile Pond- \n  It is one of the few locations where visitors can watch the crocodiles in Rajasthan. The"
    " suspension bridge runs above the pond area, and visitors can watch the crocodiles from up there."<<endl<<endl;
    cout<<"Popular for: Nature Lovers & Photo Fanatics"<<endl<<endl;
    cout<<"Things to do around Chambal Gardens:\n Dadabari Market \n Saiman Plaza \n Gma Plaza Market \n Ghoomar Beer Bar"<<endl<<endl;
    cout<<"Restaurants near Kishore Sagar Lake:\n"<<endl;
    cout<<"\t\tName\t\t\t\tAddress"<<endl;
    cout<<"\tFood Court Wonder Mart\t\tWonder Mart, 431 Dadabari Exrension, Modi College Road"<<endl;
    cout<<"\tJain Mess\t\t\tJawahar Nagar, Talwandi, Kota, Rajasthan, India"<<endl;
    cout<<"\tEatos Restaurant\t\t12-C, Nursery Scheme, Talwandi, Kota-5, Kota-Rajasthan 324004, India"<<endl<<endl;
}
void Zoo()
{
    system("cls");
    cout<<"An Overview of Kota Zoological Park"<<endl<<endl;
    cout<<"Kota Zoological Park is positioned near Kishore Sagar Lake and is one of the should-see locations in Kota."
    " This zoological park is a domestic to the diverse mammalian species including the tiger, undergo, leopard, "
    "panther, black dollar, macaque, rabbit and many others. This park additionally affords a safe haven to the "
    "avifauna like the Brahminy eagle, lark, woodpecker, cuckoo, owl etc. Kota Zoological Park is understood for its "
    "unspoiled green surroundings.October-March is the quality season for visiting this zoological park as it's miles "
    "the period whilst the weather is appropriate and the animals welcome their babies."<<endl<<endl;
    cout<<"Popular for: Picnic, Photography, Safari etc."<<endl<<endl;
    timings="All days of the week (except Tuesday); 9:00 AM - 6:30 PM";
    cout<<"Timings: "<<timings<<endl<<endl;
    entry_fee=20;
    cout<<"Entry Fee : \n For Indians: INR "<<entry_fee<<"/- per head "<<endl;
    entry_fee=40;
    cout<<" For Foreign Nationals: INR "<<entry_fee<<"/- per head"<<endl<<endl;
}
void ChatraVilas()
{
    system("cls");
    cout<<"An Overview of Chatra Vilas Garden"<<endl<<endl;
    cout<<"Chatra Vilas Garden is a well-known visitor attraction in Kota. Along with the beauty of the garden, the "
    "vacationers can also see masses of royal cenotaphs in the lawn. Located close to Chambal Hotel, this location "
    "is preferred by many domestic and international tourists. The lawn is a primary appeal to historians and college "
    "students too as one could recognize approximately the records of the region and various rulers of Kota at "
    "exclusive eras."<<endl<<endl;
    timings="All days of the week; 10:00 AM - 5:00 PM";
    cout<<"Timings: "<<timings<<endl<<endl;
    entry_fee=10;
    cout<<"Entry Fee: INR "<<entry_fee<<endl<<endl;
    cout<<"Things to do around Chatra Vilas Garden:\n Saiman Plaza \n Ghoomar Beer Bar \n Gma Plaza Market \n Central Square mall"<<endl<<endl;
    cout<<"Restaurants near Chatra Vilas Garden:\n";
    cout<<"\t\tName\t\t\t\tAddress"<<endl;
    cout<<"\tSwagat Restaurant\t\tSurya Royal Hotel, 11, Jhalawar Road"<<endl;
    cout<<"\tMaheshwari Restaurant\t\t384, Rajiv Gandhi Nagar, Kota, Rajasthan, India"<<endl<<endl;
}
void Darrah()
{
   system("cls");
   cout<<"An Overview of Darrah Wildlife Sanctuary"<<endl<<endl;
   cout<<"Darrah Wildlife Sanctuary is situated around 56 kms away from Kota near Bundi. The sanctuary boasts of a"
   " rich wildlife and is home to asiatic elephant, sambar deer, elks etc among several other exotic animal and plant"
   " species. The sanctuary is mostly popular for wildlife safaris, treks and sightseeing. Initially it was used as"
   " a hunting ground by the Royal families."<<endl<<endl;
   cout<<"Its is 0 km from city center"<<endl<<endl;
    timings="All days of the week 7:00 AM - 5:00 PM";
    cout<<"Timings: "<<timings<<endl<<endl;
    entry_fee=20;
    cout<<"Entry Fee : \n For Indians: INR "<<entry_fee<<"/- per head "<<endl;
    entry_fee=100;
    cout<<" For Foreign Nationals: INR "<<entry_fee<<"/- per head"<<endl<<endl;
}

void LuckyBurj()
{
    system("cls");
    cout<<"An Overview of Lucky Burj Garden"<<endl<<endl;
    cout<<"Lucky Burj Garden located in Kota is a pleasing and calm area to kick back out. The garden is also a "
    "famous vacationer vicinity of Kota. It is busy with both locals and site visitors. The lawn is most chosen "
    "location for evenings to go for picnics or to go for a walk. The garden is protected with lush green plant "
    "life and colorful owers. The garden is bustling in the course of weekends, traffic can experience the view, "
    "taste local cuisines and make the ride to the lawn memorable."<<endl<<endl;
    cout<<"Popular for: Picnic, Photography, etc."<<endl<<endl;
    timings="All days of the week 8:00 AM - 8:30 PM";
    cout<<"Timings: "<<timings<<endl<<endl;
    entry_fee=10;
    cout<<"Entry Fee : \n For Indians: INR "<<entry_fee<<"/- per head "<<endl;
    entry_fee=20;
    cout<<" For Foreign Nationals: INR "<<entry_fee<<"/- per head"<<endl<<endl;
}
};
class temples:public list   //Hierarchical inheritance
{
public:
    void display()
    {
        cout<<"TEMPLES IN KOTA"<<endl;
        cout<<"1. Garadia Mahadev Temple"<<endl;
        cout<<"2. Shivpuri Dham"<<endl;
        cout<<"3. Godavri Dham Temple"<<endl;
        cout<<"4. Kansua Shiv Mandir"<<endl;
        cout<<"5. Khade Ganesh Ji Temple"<<endl;
    }
    void GaradiaMahadev()
    {
        system("cls");
        cout<<"An Overview of Garadia Mahadev Temple"<<endl<<endl;
        cout<<"Situated in Daulatganj near Kota, Garadiya Mahadev Temple is not just a revered Hindu temple"
        " but also a popular tourist spot because of its location at the scenic Chambal gorge. Perched at a "
        "height of 500 feet from the mean sea level on a picturesque cliff, the temple is enshrined by Hindu"
        " God Shiva. Boasting of immense scenic beauty, views of the virgin green plains sprawling all over "
        "and flanked by river Chambal on the side, the place is one of the most ideal picnic spots in the region."
        " The presence of several peacocks and other avian species attract a lot of birdwatchers and photography "
        "buffs. Considered to be the best place to relax and unwind, the vantage point is surely a must- visit."<<endl<<endl;
        cout<<"It is 17 km from city centre."<<endl<<endl;
        cout<<"Photography and Videography charges: INR 50"<<endl<<endl;
        timings="All days of the week 5:00 AM - 7:00 PM";
        cout<<"Timings: "<<timings<<endl<<endl;
        entry_fee=0;
        cout<<"Entry Fee: INR "<<entry_fee<<endl<<endl;
        cout<<"Popular for: God Lovers and Nirvana Seekers"<<endl<<endl;
        cout<<"Things to do around Garadia Mahadev Temple:\n Chambal River Cruise \n Mahaveer Dharamshala Market \n Sawan Puhar Waterpark \n Central Square mall"<<endl<<endl;
        cout<<"Restaurants near Garadia Mahadev Temple:\n";
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tKota's Zaika\t\t\tNayapura, Hotel Saraswati Palace, Near Ratan Kachori and sweets"<<endl;
        cout<<"\tThe Highway King\t\tNear St.John's School, Gyan Sarovar Kunhadi, Kota, Rajasthan 324008"<<endl;
        cout<<"\tKota Castle Restaurant\t\tHn 29 Central Road Landmark City Opp to Shri Hari Hospital"<<endl;
        cout<<"\tAmar Dhaba\t\t\tBhimganj Mandi, Kota, Rajasthan, India"<<endl<<endl;

    }
    void Shivpuri()
    {
       system("cls");
       cout<<"An Overview of Shivpuri Dham"<<endl<<endl;
        cout<<"Shivpuri Dham is one the ancient most and unique temple in Kota. It has as many as 525 shivalingas "
        "at one place. The place is thronged by pilgrims and devotees all through the year; however, the busiest "
        "time of the year is Shivratri or Rasleela. Between the shivalingas, there is a huge statue of God Pashupati Nath."<<endl<<endl;
        cout<<"It is 6 km from city center."<<endl<<endl;
        cout<<"Popular for: God Lovers"<<endl<<endl;
        timings="All days of the week 24 hours";
        cout<<"Timings: "<<timings<<endl<<endl;
        entry_fee=0;
        cout<<"Entry Fee: INR "<<entry_fee<<endl<<endl;
        cout<<"Things to do around Shivpuri Dham:\n Lodha Market \n City Mall \n Z Cine Mall \n Central Square mall"<<endl<<endl;
        cout<<"Restaurants near Shivpuri Dham:\n";
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tNatural Restaurant\t\tVigyan Nagar, Kota, Rajasthan, India"<<endl;
        cout<<"\tRoyal Firdous Restaurant\tSH 51, Dhanmandi, Kota, Rajasthan, India"<<endl;
        cout<<"\tPalm Restaurant\t\t\tHotel The Grand Chandiram, Near LIC Building, Jhalawar Road"<<endl;
        cout<<"\tMaheshwari Restaurant\t\t384,Rajeev Ghandi Nagar, Kota, Rajasthan, India"<<endl<<endl;

    }
    void GodavriDham()
    {
       system("cls");
       cout<<"An Overview of Godavri Dham Temple"<<endl<<endl;
       cout<<"Located in Dadabari in Kota, Godavari Dham Temple is dedicated to Lord Hanuman and is based on the"
       " banks of river Chambal. The temple hosts a special morning and midnight aarti on Tuesdays and Saturdays "
       "which is attended by hundreds of pilgrims. Besides, the temple also houses idols of several other gods "
       "and goddesses including Lord Shiva, Bhairav, Ganpati etc."<<endl<<endl;
       cout<<"It is 8 km from city center"<<endl<<endl;
       cout<<"Popular for: God Lovers"<<endl<<endl;
        timings="All days of the week 7:00 AM - 8:00 PM";
        cout<<"Timings: "<<timings<<endl<<endl;
        entry_fee=0;
        cout<<"Entry Fee: INR "<<entry_fee<<endl<<endl;
        cout<<"Things to do around Godavri Dham Temple:\n New Motor Market \n Central Square Mall \n Lakshmi Narayan Market \n Saiman Plaza"<<endl<<endl;
        cout<<"Restaurants near Godavri Dham Temple:\n";
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tPalm Restaurant\t\t\t\tHotel The Grand Chandiram, Near LIC Building, Jhalawar Road"<<endl;
        cout<<"\tRoyal Firdous Restaurant\t\tSH 51, Dhanmandi, Kota, Rajasthan, India"<<endl;
        cout<<"\tNatural Restaurant\t\t\tVigyan Nagar, Kota, Rajasthan, India"<<endl<<endl;
}
    void Kansua()
    {
        system("cls");
        cout<<"An Overview of Kansua Shiv Mandir"<<endl<<endl;
        cout<<"Kansua Temple is one of the most ancient temples near Bundi in Kota which is enshrined by Lord Shiva."
        " The temple houses a shivalinga which has four heads; it is believed that the shrine was constructed by the"
        " Pandavas when they visited Kota during their exile. The temple is built just right by River Chambal and is"
        " also known as Karneshwar Temple."<<endl<<endl;
        cout<<"It is 8 km from city center."<<endl<<endl;
        timings="All days of the week 6:00 AM - 7:00 PM";
        cout<<"Timings: "<<timings<<endl<<endl;
        entry_fee=0;
        cout<<"Entry Fee: INR "<<entry_fee<<endl<<endl;
    }
    void KhadeGanesh()
    {
        system("cls");
        cout<<"An Overview of Khade Ganesh ji Temple"<<endl<<endl;
        cout<<"Believed to be more than 600 years old idol, Khade Ganesh is one of the most important religious place in Kota."
        "Situated close to river Chambal, there is a lake nearby where several Peacocks could be spotted. The unique part "
        "about this temple is that Ganesh's idol is in standing pose, which is supposed to be the only standing idol of Ganesh"
        " in India."<<endl<<endl;
        cout<<"It is 12 km from city center."<<endl<<endl;
        timings="All days of the week 5:00 AM - 7:00 PM";
        cout<<"Timings: "<<timings<<endl<<endl;
        entry_fee=0;
        cout<<"Entry Fee: INR "<<entry_fee<<endl<<endl;
        cout<<"Things to do around Khade Ganesh Ji Temple:\n Vishwakarma Market \n Pandya Groups City Mall \n Z Cine Mall \n Azad Market"<<endl<<endl;
        cout<<"Restaurants near Khade Ganesh Ji Temple:\n";
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tOm Restaurant\t\t\tBodhgaya Rd, Bodh Gaya"<<endl;
        cout<<"\tFood Court Wonder Mart\t\tWonder Mart, 431 Dadabari Extension, Modi College Road"<<endl;
        cout<<"\tEatos Restaurant\t\t12-C, Nursery Scheme, Talwandi, Kota-5, Kota-Rajasthan 324004, India"<<endl<<endl;

    }

};
class museums:public list   //Hierarchical inheritance
{
public:
    void display()
    {
        cout<<"MUSEUMS IN KOTA"<<endl;
        cout<<"1. Brij Vilas Palace Government Museum"<<endl;
        cout<<"2. Rao Madho Singh Museum"<<endl;
    }
    void GovMuseum()
    {
        system("cls");
        cout<<"An Overview of Brij Vilas Palace Government Museum"<<endl<<endl;
        cout<<"Housed in the premises of Brijvilas Palace near Kishore Sagar in Kota, Government Museum is a perfect"
        " depiction of the culture and history of Rajasthan. The museum is replete with artefacts, archaeological "
        "findings, documents, coins and other valuable exhibits. One of the most prominent exhibit is the statue "
        "brought from Baroli. Photography is prohibited."<<endl<<endl;
        cout<<"It is 3 km from city center"<<endl<<endl;
        timings="All days of the week(except Monday) 10:00 AM - 5:00 PM";
        cout<<"Timings: "<<timings<<endl<<endl;
        entry_fee=10;
        cout<<"Entry Fee: INR "<<entry_fee<<endl<<endl;
        cout<<"Things to do around Government Museum:\n Swarn Rajat Market \n New Cloth Market \n Central Square Mall \n Saiman Plaza"<<endl<<endl;
        cout<<"Restaurants near Government Museum:\n"<<endl;
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tSwagat Restaurant\t\tSurya Royal Hotel, 11, Jhalawar Road"<<endl;
        cout<<"\tPalm Restaurant\t\t\tHotel The Grand Chandiram, Near LIC Building, Jhalawar Road"<<endl;
        cout<<"\tNon Veg Restaurant\t\tNear Aerodrome Circle, SH 51, Dhanmandi, Kota, Rajasthan, India"<<endl<<endl;
    }
    void RaoMadhoMuseum()
    {
        system("cls");
        cout<<"An Overview of Rao Madho Singh Museum"<<endl<<endl;
        cout<<"Housed in the premises of Old Palace of Kota, Rao Madho Singh Museum boasts of an incredible "
        "collection of rich artefacts and documents depicting the history and culture of Rajasthan. Silver "
        "figurines, terracotta figures, coins, sculptures and manuscripts attracts the students, historians "
        "and tourists alike. The museum sprawls over two storeys in several galleries."<<endl<<endl;
        cout<<"It is 5km from city center."<<endl<<endl;
        cout<<"Popular for: History Buffs"<<endl<<endl;
        timings="All days of the week 10:00 AM - 5:00 PM";
        cout<<"Timings: "<<timings<<endl<<endl;
        entry_fee=10;
        cout<<"Entry Fee: Lower Section: INR "<<entry_fee<<endl;
        entry_fee=50;
        cout<<"Entry Fee: Upper Section: INR "<<entry_fee<<endl<<endl;
        cout<<"Things to do around Rao Madho Singh Museum: \n Kalawati Paliwal Market \n Central Square Mall \n Saiman Plaza \n New Motor Market"<<endl<<endl;
        cout<<"Restaurants near Rao Madho Singh Museum:\n";
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tPalm Restaurant\t\t\t\tHotel The Grand Chandiram, Near LIC Building, Jhalawar Road"<<endl;
        cout<<"\tSwagat Restaurant\t\t\tBodhgaya Rd,Bodh Gaya"<<endl;
        cout<<"\tRoyal Firdous Restaurant\t\tSH 51, Dhanmandi, Kota, Rajasthan, India"<<endl<<endl;
}
};
class lakes_and_waterfalls:public list   //Hierarchical inheritance
{
public:
    void display()
    {
        cout<<"LAKES AND WATERFALLS IN KOTA"<<endl;
        cout<<"1. Kishore Sagar Lake"<<endl;
        cout<<"2. Gaipernath Waterfall"<<endl;
        cout<<"3. Kota  Barrage"<<endl;
    }
    void KishoreSagar()
    {
        system("cls");
        cout<<"An Overview of Kishore Sagar lake"<<endl<<endl;
        cout<<"Kishore Sagar is an artificial picturesque lake dating back to 1346 constructed by the Bundi"
        " Prince Dehra Deh. It located by the side of attractive Brij Vilas palace museum."<<endl<<endl;
        cout<<"4 km from city center"<<endl<<endl;
        cout<<"Popular for: Nature Lovers & Photo Fanatics"<<endl<<endl;
        timings="All days of the week 6:00AM - 9:00PM";
        cout<<"Timings: "<<timings<<endl<<endl;
        entry_fee=10;
        cout<<"Entry Fee: INR "<<entry_fee<<endl<<endl;
        cout<<"Things to do around Kishore Sagar Lake:\n Gma Plaza Market \n New Sarafa Market \n Central Square Mall \n Blue Sea Bar"<<endl<<endl;
        cout<<"Restaurants near Kishore Sagar Lake:\n"<<endl;
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tMaheshwari Restaurant\t\t384,Rajeev Ghandi Nagar, Kota, Rajasthan, India"<<endl;
        cout<<"\tFlavour Restaurant\t\tOm Cineplex, 11, Indra Vihar Opera Hospital Road, Kota, India"<<endl;
        cout<<"\tEatos Restaurant\t\t12-C, Nursery Scheme, Talwandi, Kota-5, Kota-Rajasthan 324004, India"<<endl<<endl;

    }
    void Gaipernath()
    {
        system("cls");
        cout<<"An Overview of Gaipernath Waterfall"<<endl<<endl;
        cout<<"Gaipernath Waterfall is situated near Kota city centre in Kota. It is a picturesque tourist spot popular"
        " for picnics, small treks, nature photography and the like. The ideal time to visit the waterfall is during"
        " monsoons when the rains refurbish the water reserves and you can experience the cascading falls in all its"
        " glory. You can also take a dip in the freshwater at the base."<<endl<<endl;
        cout<<"It is 7 km from city center"<<endl<<endl;
        timings="All days of the week 24 hours";
        cout<<"Timings: "<<timings<<endl<<endl;
        entry_fee=0;
        cout<<"Entry Fee: INR "<<entry_fee<<endl<<endl;
        cout<<"Popular for: Nature Lovers & Photo Fanatics"<<endl<<endl;
        cout<<"Things to do around Gaipernath Waterfall:\n Gma Plaza Market \n Swarn Rajat Market \n Central Square Mall \n Saiman Plaza"<<endl<<endl;
        cout<<"Restaurants near Gaipernath Waterfall:\n"<<endl;
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tMaheshwari Restaurant\t\t384,Rajeev Ghandi Nagar, Kota, Rajasthan, India"<<endl;
        cout<<"\tSwagat Restaurant\t\tBodhgaya Rd, Bodh Gaya"<<endl;
        cout<<"\tEatos Restaurant\t\t12-C, Nursery Scheme, Talwandi, Kota-5, Kota-Rajasthan 324004, India"<<endl<<endl;
    }
    void KotaBarrage()
    {
      system("cls");
      cout<<"An Overview of Kota Barrage"<<endl<<endl;
      cout<<"Kota Barrage was certainly not constructed keeping tourism in mind. However, its majestic appeal has "
      "turned it into one over the years. The gushing flow of foaming white water is an absolute treat for the eyes "
      "from atop the bridge. Visitors flock here to enjoy this majestic scene, especially in monsoon when the gates "
      "are all open. The area is characterised by a cool, relaxing breeze because of the proximity of the water. It "
      "is one of those places where you can keep quiet and let the place make the noise. Kota Barrage is a favourite "
      "evening time gathering. You will find people in couples or groups standing along the railings enjoying the view "
      "and spending quality time with their family and loved ones."<<endl<<endl;
      cout<<"It is 6 km from city center."<<endl<<endl;
      timings="All days of the week 24 hours";
      cout<<"Timings: "<<timings<<endl<<endl;
        entry_fee=0;
        cout<<"Entry Fee: INR "<<entry_fee<<endl<<endl;
        cout<<"Restaurants near Kota Barrage:\n"<<endl;
        cout<<"\t\tName\t\t\t\tAddress"<<endl;
        cout<<"\tMaheshwari Restaurant\t\t384,Rajeev Ghandi Nagar, Kota, Rajasthan, India"<<endl;
        cout<<"\tShri Gautam Restaurant\t\tShop No-09, Thermal Main Road"<<endl;
        cout<<"\tDesh Sevak Bhojnalaya\t\tOpposite Police Chouki"<<endl<<endl;
    }
};

//Global declaration of class objects
   tourism t;
   forts_and_palaces fp;
   gardens g;
   temples temp;
   museums m;
   lakes_and_waterfalls lw;

   void goto_forts_and_palaces()
   {
        char b;
        cout<<"Want to go back?(Y/N) :";
        cin>>b;
        if(b=='y')
        {fp.display();}
        else exit(0);
   }
   void goto_gardens()
   {
       char b;
        cout<<"Want to go back?(Y/N) :";
        cin>>b;
        if(b=='y')
        {g.display();}
        else exit(0);
   }
   void goto_temples()
   {
       char b;
        cout<<"Want to go back?(Y/N) :";
        cin>>b;
        if(b=='y')
        {temp.display();}
        else exit(0);
   }
   void goto_museums()
   {
       char b;
        cout<<"Want to go back?(Y/N) :";
        cin>>b;
        if(b=='y')
        {m.display();}
        else exit(0);
   }
   void goto_lakes_and_waterfalls()
   {
       char b;
        cout<<"Want to go back?(Y/N) :";
        cin>>b;
        if(b=='y')
        {lw.display();}
        else exit(0);
   }


//******************HOUSING module**********************//


class housing                 //in Kota city//
{
 protected:
   char name[30];
   long long int adhaarno;
   long long int phone;
 public:
   char room_type[30];
   int days;
   void input()    //general housing details//
    {
      cout<<"Enter name,adhaar number and contact number ";
      cin>>name>>adhaarno>>phone;
      cout<<"Enter room type and number of days you want to stay ";
      cin>>room_type;
      cin>>days;
    }
  virtual void display(char *){};
};
class hostel:public housing  //derived class of housing//
{
  protected:
    float price; //total price//
  public:
    int input1(char hostel_name[30]);
    void display(char *);
};
int hostel::input1(char hostel_name[30])
{
       if(strcmpi(hostel_name,"rajniwas")==0)
       {
	     if(strcmpi(room_type,"twin")==0)
	     {
	      price=days * 250;
	      cout<<"Room is available.Your price according to twin sharing basis in hostel=Rs."<<price;
	      return 0;
	     }
         else if(strcmpi(room_type,"quad")==0)
	     {
	       price=days * 150;
	       cout<<"Room is available.Your price according to quad sharing basis in hostel=Rs."<<price;
	       return 0;
         }
         else
	     {
		   cout<<"!Room not available in Raj niwas hostel!";
	       return -1;
         }
      }
     else if(strcmp(hostel_name,"krishna")==0)
     {
       if(strcmpi(room_type,"twin")==0)
	   {
	     price=days * 220;
	     cout<<"Room is available.Your price according to twin sharing basis in hostel=Rs."<<price;
	     return 0;
	   }
       else if(strcmpi(room_type,"quad")==0)
	   {
	     price=days * 180;
	     cout<<"Room is available.Your price according to quad sharing basis in hostel=Rs."<<price;
	     return 0;
	   }
       else
	   {
		 cout<<"!Room not available in Krishna hostel!";
	    return -1;
       }
     }
     return 0;
}
void hostel:: display(char hostel_name[30])
{
  cout<<endl<<"Your details:"<<endl;
  cout<<"Name:"<<name<<endl<<"Adhaar no:"<<adhaarno<<endl<<"Phone no:"<<phone<<endl<<"Days:"<<days<<endl<<"Room type:"<<room_type<<endl<<"Hostel name:"<<hostel_name<<endl<<"Price:"<<price;
}
class pg:public housing   //derived class of housing//
{
  protected:
    float price1;    //price per month//
  public:
    int input2(char pg_name[30]);
    void display(char *);
};
int pg::input2(char pg_name[30])
{
       if(strcmpi(pg_name,"prateek")==0)
       {
	     if(strcmpi(room_type,"twin")==0)
	     {
	      price1=days * 500;
	      cout<<"Room is available.Your price according to twin sharing basis in PG=Rs."<<price1;
	      return 0;
	     }
          else if(strcmpi(room_type,"quad")==0)
	     {
	      price1=days * 400;
	      cout<<"Room is available.Your price according to quad sharing basis in PG=Rs."<<price1;
	      return 0;
	     }
          else
	     {
	      cout<<"!Room not available in Prateek PG!";
	      return -1;
	     }
       }
      else if(strcmpi(pg_name,"aastha")==0)
      {
	    if(strcmpi(room_type,"twin")==0)
	    {
	      price1=days * 450;
	      cout<<"Room is available.Your price according to twin sharing basis in PG=Rs."<<price1;
	      return 0;
	    }
        else if(strcmpi(room_type,"quad")==0)
	    {
	      price1=days * 500;
	      cout<<"Room is available.Your price according to quad sharing basis in PG=Rs."<<price1;
	      return 0;
	    }
        else
	      {
		   cout<<"!Room not available in Aastha PG!";
	       return -1;
	      }
      }
      return 0;
}
void pg::display(char pg_name[30])
{
  cout<<endl<<"Your details:"<<endl;
  cout<<"Name:"<<name<<endl<<"Adhaar no:"<<adhaarno<<endl<<"Phone no:"<<phone<<endl<<"Days:"<<days<<endl<<"Room type:"<<room_type<<endl<<"PG name:"<<pg_name<<endl<<"Price:"<<price1;
}
class hotel:public housing   //derived class of housing//
{
  protected:
    float price2;    //price per day//
  public:
    int input3(char hotel_name[30]);
    void display(char *);
};
int hotel::input3(char hotel_name[30])
{
      if(strcmpi(hotel_name,"international_grand")==0)
      {
       if(strcmpi(room_type,"single")==0)
	   {
	    price2=days * 3000;
	    cout<<"Room is available.Your price according to single stay basis in hotel=Rs."<<price2;
	    return 0;
	  }
       else if(strcmpi(room_type,"twin")==0)
	  {
	    price2=days * 2000;
	    cout<<"Room is available.Your price according to twin sharing basis in hotel=Rs."<<price2;
	    return 0;
	  }
       else if(strcmpi(room_type,"quad")==0)
	  {
	    price2=days * 1500;
	    cout<<"Room is available.Your price according to quad sharing basis in hotel=Rs."<<price2;
	    return 0;
	  }
       else
      {
	    cout<<"!Room not available in International grand hotel!";
	    return -1;
      }
    }
     else if(strcmpi(hotel_name,"country_inn")==0)
      {
       if(strcmpi(room_type,"single")==0)
	   {
	     price2=days * 5000;
	     cout<<"Your price according to single stay basis in hotel=Rs."<<price2;
	     return 0;
	   }
       else if(strcmpi(room_type,"twin")==0)
	   {
	     price2=days * 3000;
	     cout<<"Your price according to twin sharing basis in hotel=Rs."<<price2;
	     return 0;
	   }
       else if(strcmpi(room_type,"quad")==0)
	   {
	     price2=days * 2000;
	     cout<<"Your price according to quad sharing basis in hotel=Rs."<<price2;
	     return 0;
	   }
       else
	   {
	     cout<<"!Room not available in Country inn hotel!";
	     return -1;
	   }
      }
      return 0;
}
void hotel::display(char hotel_name[30])
{
  cout<<endl<<"Your details:"<<endl;
  cout<<"Name:"<<name<<endl<<"Adhaar no:"<<adhaarno<<endl<<"Phone no:"<<phone<<endl<<"Days:"<<days<<endl<<"Room type:"<<room_type<<endl<<"Hotel name:"<<hotel_name<<endl<<"Price:"<<price2;
}
class carent:public housing
{
	protected:
	int rent;
	char carname[30];
	char model[30];
	public:
		void input4(char carname[30]);
		void display(char*);
};
	void carent:: input4(char carname[30])
		{
			cout<<"Enter car model ";
			cin>>model;
			if(strcmpi(carname,"Maruti_suzuki")==0)
			{

		     if(strcmp(model,"RJ-20")==0)
		      rent=days*100;
		     else if(strcmp(model,"RJ-34")==0)
		      rent=days*120;
		     else if(strcmp(model,"RJ-40")==0)
		      rent=days*200;
		   }
		   if(strcmpi(carname,"Wagon_R")==0)
			{

		     if(strcmp(model,"RJ-22")==0)
		      rent=days*120;
		     else if(strcmp(model,"RJ-30")==0)
		      rent=days*180;
		     else if(strcmp(model,"RJ-10")==0)
		      rent=days*100;
		   }
	    }
		void carent::display(char carname[30])
		{
			cout<<"Car model:"<<model<<endl<<"Car name:"<<carname<<endl<<"Rent="<<rent<<endl;
		}


//**********************JOB SEEKER module*******************//

class resume
{
 public:
   char name[30];
   int age;
   long long int phone;
   void input()
    {
      cout<<endl<<"Enter name, age and contact number: ";
      cin>>name>>age>>phone;
    }
 virtual void display(){};
};
class teaching:public resume
{
  protected:
   char qualification1[30];
   int prev_jobexperience1; //in years
   char applyingforpost1[50];
  public:
      void display()
   {
     cout<<endl<<endl<<"Name:"<<name<<endl<<"Age:"<<age<<endl<<"Phone:"<<phone<<endl<<"Qualification:"<<qualification1<<endl<<"Previous Job Experience:"<<prev_jobexperience1<<endl;
     cout<<"Post applying for:"<<applyingforpost1<<endl;
   }
    void input1()
     {
       cout<<endl<<"Enter your qualifications,previous job experience and the post you are applying for:";
       cin>>qualification1>>prev_jobexperience1>>applyingforpost1;

       if(prev_jobexperience1<2)
        {
	     cout<<endl<<"Not eligible";
        }
       else
         {
          cout<<endl<<"Eligible";
          display();
          if(prev_jobexperience1==2)
           {
             cout<<endl<< "Salary = 10,000 per month";
           }
           else if( prev_jobexperience1>2 && prev_jobexperience1<5)
           {
             cout<<endl<< " Salary = 15,000 per month";
           }
           else
	       {
             cout<<endl<<" salary = 20,000 per month";
           }
         }
    }


};
class engineer:public resume
{
  public:
   char qualification3[30];
   char applyingforpost3[50];
   int skills;
     void display()
   {
     cout<<endl<<endl<<"Name:"<<name<<endl<<"Age:"<<age<<endl<<"Phone:"<<phone<<endl<<"Qualification:"<<qualification3<<endl<<"Number of skills:"<<skills<<endl;
     cout<<"Post applying for:"<<applyingforpost3<<endl;
   }

   void input3()
   {
    cout<<endl<<"Enter your qualifications,number of skills you have and the post you are applying for:";
    cin>>qualification3>>skills>>applyingforpost3;

     if(skills<3)
     {
	   cout<<endl<<"Not eligible";
     }
       else
    {
	  cout<<endl<<"Eligible";
	  display();
      if(skills==3)
      {
      cout<<"Salary1= 20,000 per month";
      }
      else if( skills>3 && skills<5)
     {
      cout<<endl<<"Salary= 25,000-30,000 per month";
     }
      else
	  {
       cout<<endl<<"salary 40,000-50,000 per month";
      }
  }
}

};
class doctor:public resume
{
  public:
   char qualification2[30];
   int prev_jobexperience2; //in years
   char applyingforpost2[50];

    void display()
   {
     cout<<endl<<endl<<"Name:"<<name<<endl<<"Age:"<<age<<endl<<"Phone:"<<phone<<endl<<"Qualification:"<<qualification2<<endl<<"Previous Job Experience:"<<prev_jobexperience2<<endl;
     cout<<"Post applying for:"<<applyingforpost2<<endl;
   }

    void input2()
   {
    cout<<endl<<"Enter your qualifications,previous job experience and the post you are applying for:";
       cin>>qualification2>>prev_jobexperience2>>applyingforpost2;

     if(prev_jobexperience2<3)
      {
	    cout<<endl<<"Not eligible";
      }
      else
      {
	   cout<<endl<<"Eligible";
	   display();
       if(prev_jobexperience2==3)
         {
         	cout<< "Salary = 100,000 per month";
         }
         else if( prev_jobexperience2>3 && prev_jobexperience2<7)
        {
            cout<<"Salary = 200000-300000 per month";
        }
         else
		 {
            cout<<"salary = 300000-400000 per month";
         }
      }
   }

};


//***************************EDUCATION Module***************************//

class student
{
    protected:
                char name[30];
                long long int mobileno;
                int age;
                char city[30];
                char email[50];
   public:
                int Class; //class is a keyword hence can't be used as a variable name so use Class or sth else
                char dropper;
        void input()
        {

            cout<<"Enter name: "; cin>>name;
            cout<<"Enter mobile no: "; cin>>mobileno;
            cout<<"Enter age: "; cin>>age;
            cout<<"enter city: "; cin>>city;
            cout<<"Enter Email: "; cin>>email;
            cout<<"enter class: "; cin>>Class;
            cout<<"Are you a dropper?(enter y or n):"; cin>>dropper;
        }

};

class institutes:public student
{
    public:
    void institutenames()
    {
        cout<<"The following institutes have vacancy:";
        cout<<"\n"<<"1.Prodigy"<<endl;
        cout<<"2.Allen"<<endl<<endl;
    }
};

class courses:public institutes
{
    public:
    char stream[30];
    char typeofcourse[20];
    int standard;
    char type[10];
    void input2()
    {
        cout<<"Enter stream(med/non med): ";
        cin>>stream;
        cout<<"Enter standard: ";
        cin>>standard;
        cout<<"Enter the type of student(dropper or regular): ";
        cin>>type;
        cout<<"Enter type of course you want: ";
        cin>>typeofcourse;
    }

    void display()
    {
        char instiname[30];
        cout<<"Enter institute's name for its courses:";
        cin>>instiname;
        if(strcmp(instiname,"prodigy")==0)
        {
            cout<<"   REGULAR COURSES   "<<endl;
            cout<<"   FOUNDATION(BOTH MED/NON MED)  "<<endl;
            cout<<"   CLASS 6- LITTLE GENIE   "<<endl;
            cout<<"   CLASS 7- UDAYA TWO YEAR  "<<endl;
            cout<<"   CLASS 8- UDAYA ONE YEAR  "<<endl<<endl;
            cout<<"   NON- MED REGULAR COURSES "<<endl;
            cout<<"   CLASS 9- PINNACLE1  " <<endl ;
            cout<<"   CLASS 10- PINNACLE2  "<<endl;
            cout<<"   CLASS 11- PINNACLE3  "<<endl;
            cout<<"   CLASS 12- PINNACLE4  "<<endl;
            cout<<"   DROPPER- ROCKSTAR  "<<endl<<endl;
            cout<<"    MED REGULAR COURSES  "<<endl;
            cout<<"   CLASS 9- SHIKSHA1  "  <<endl;
            cout<<"   CLASS 10- SHIKSHA2  "<<endl;
            cout<<"   CLASS 11- SHIKSHA3  "<<endl;
            cout<<"   CLASS 12- SHIKSHA4  "<<endl;
            cout<<"   DROPPER- MEDDI  "<<endl<<endl;
        }
        else  if(strcmp(instiname,"allen")==0)
        {
            cout<<"   REGULAR COURSES   "<<endl;
            cout<<"   FOUNDATION(BOTH MED/NON MED)  "<<endl;
            cout<<"   CLASS 6- LITTLE GENIE   "<<endl;
            cout<<"   CLASS 7- UDAYA TWO YEAR  "<<endl;
            cout<<"   CLASS 8- UDAYA ONE YEAR  "<<endl<<endl;
            cout<<"   NON- MED REGULAR COURSES "<<endl;
            cout<<"   CLASS 9- PINNACLE1  "  <<endl;
            cout<<"   CLASS 10- PINNACLE2  "<<endl;
            cout<<"   CLASS 11- PINNACLE3  "<<endl;
            cout<<"   CLASS 12- PINNACLE4  "<<endl;
            cout<<"   DROPPER- ROCKSTAR  "<<endl<<endl;
            cout<<"    MED REGULAR COURSES  "<<endl;
            cout<<"   CLASS 9- SHIKSHA1  " <<endl ;
            cout<<"   CLASS 10- SHIKSHA2  "<<endl;
            cout<<"   CLASS 11- SHIKSHA3  "<<endl;
            cout<<"   CLASS 12- SHIKSHA4  "<<endl;
            cout<<"   DROPPER- MEDDI  "<<endl<<endl;
        }

    }

    void displaycoursedetails()
    {
        char names[50];
        cout<<"Enter the name of the course you want the details of:";
        cin.ignore();
        cin.getline(names,50); //cin doesnt take input after space use cin.getline
        if(strcmp(names,"Little Genie")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl<<endl;
            cout<<"-->Entire course will be covered in 4 phases."<<endl;
            cout<<"-->Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
            cout<<"-->Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
            cout<<"-->Work Books for Home Assignment."<<endl;
            cout<<"-->Common Phase Tests across the country."<<endl;
            cout<<"-->Chapter Practice Problems (CPP)"<<endl;
            cout<<"-->Class Learning Improvement Program (CLIP)"<<endl;
            cout<<"-->Success Potential Index (SPI"<<endl;
            cout<<"-->Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
            cout<<"-->Regular feedback & Test Analysis Sessions."<<endl;
            cout<<"-->Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
            cout<<"DURATION :"<<endl;
            cout<<"About 175 hrs. Including classroom interaction and tests."<<endl<<endl;
        }
        else
          if(strcmp(names,"Udaya Two Year")==0)
        {
        cout<<"COURSE STRUCTURE :"<<endl<<endl;
        cout<<"-->Entire course will be covered in 4 phases."<<endl;
        cout<<"-->Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
        cout<<"-->Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
        cout<<"-->Work Books for Home Assignment."<<endl;
        cout<<"-->Common Phase Tests across the country."<<endl;
        cout<<"-->Chapter Practice Problems (CPP)"<<endl;
        cout<<"-->Class Learning Improvement Program (CLIP)"<<endl;
        cout<<"-->Success Potential Index (SPI"<<endl;
        cout<<"-->Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
        cout<<"-->Regular feedback & Test Analysis Sessions."<<endl;
        cout<<"-->Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
        cout<<"DURATION :"<<endl;
        cout<<"About 175 hrs. Including classroom interaction and tests."<<endl<<endl;
        }

        else  if(strcmp(names,"Udaya One year")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl<<endl;
    cout<<"-->Entire course will be covered in 4 phases."<<endl;
    cout<<"-->Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
    cout<<"-->Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
    cout<<"-->Work Books for Home Assignment."<<endl;
    cout<<"-->Common Phase Tests across the country."<<endl;
    cout<<"-->Chapter Practice Problems (CPP)"<<endl;
    cout<<"-->Class Learning Improvement Program (CLIP)"<<endl;
    cout<<"-->Success Potential Index (SPI"<<endl;
    cout<<"-->Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
    cout<<"-->Regular feedback & Test Analysis Sessions."<<endl;
    cout<<"-->Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
    cout<<"DURATION :"<<endl;
    cout<<"About 175 hrs. Including classroom interaction and tests."<<endl<<endl;
}

else  if(strcmp(names,"PINNACLE1")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl<<endl;
        cout<<"-->Entire course will be covered in 4 phases."<<endl;
        cout<<"-->Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
        cout<<"-->Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
        cout<<"-->Work Books for Home Assignment."<<endl;
        cout<<"-->Common Phase Tests across the country."<<endl;
        cout<<"-->Chapter Practice Problems (CPP)"<<endl;
        cout<<"-->Class Learning Improvement Program (CLIP)"<<endl;
        cout<<"-->Success Potential Index (SPI"<<endl;
        cout<<"-->Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
        cout<<"-->Regular feedback & Test Analysis Sessions."<<endl;
        cout<<"-->Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
        cout<<"DURATION :"<<endl;
        cout<<"About 175 hrs. Including classroom interaction and tests."<<endl<<endl;

}
else if  (strcmp(names,"PINNACLE2")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl<<endl;
        cout<<"-->Entire course will be covered in 4 phases."<<endl;
        cout<<"-->Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
        cout<<"-->Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
        cout<<"-->Work Books for Home Assignment."<<endl;
        cout<<"-->Common Phase Tests across the country."<<endl;
        cout<<"-->Chapter Practice Problems (CPP)"<<endl;
        cout<<"-->Class Learning Improvement Program (CLIP)"<<endl;
        cout<<"-->Success Potential Index (SPI"<<endl;
        cout<<"-->Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
        cout<<"-->Regular feedback & Test Analysis Sessions."<<endl;
        cout<<"-->Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
        cout<<"DURATION :"<<endl;
        cout<<"About 175 hrs. Including classroom interaction and tests."<<endl<<endl;
}

else  if(strcmp(names,"PINNACLE3")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl<<endl;
        cout<<"-->Entire course will be covered in 4 phases."<<endl;
        cout<<"-->Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
        cout<<"-->Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
        cout<<"-->Work Books for Home Assignment."<<endl;
        cout<<"-->Common Phase Tests across the country."<<endl;
        cout<<"-->Chapter Practice Problems (CPP)"<<endl;
        cout<<"-->Class Learning Improvement Program (CLIP)"<<endl;
        cout<<"-->Success Potential Index (SPI"<<endl;
        cout<<"-->Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
        cout<<"-->Regular feedback & Test Analysis Sessions."<<endl;
        cout<<"-->Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
        cout<<"DURATION :"<<endl;
        cout<<"About 175 hrs. Including classroom interaction and tests."<<endl<<endl;
}

 else if(strcmp(names,"PINNACLE4")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl<<endl;
        cout<<"-->Entire course will be covered in 4 phases."<<endl;
        cout<<"-->Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
        cout<<"-->Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
        cout<<"-->Work Books for Home Assignment."<<endl;
        cout<<"-->Common Phase Tests across the country."<<endl;
        cout<<"-->Chapter Practice Problems (CPP)"<<endl;
        cout<<"-->Class Learning Improvement Program (CLIP)"<<endl;
        cout<<"-->Success Potential Index (SPI"<<endl;
        cout<<"-->Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
        cout<<"-->Regular feedback & Test Analysis Sessions."<<endl;
        cout<<"-->Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
        cout<<"DURATION :"<<endl;
        cout<<"About 175 hrs. Including classroom interaction and tests."<<endl<<endl;
}

else  if(strcmp(names,"ROCKSTAR")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl<<endl;
        cout<<"-->Entire course will be covered in 4 phases."<<endl;
        cout<<"-->Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
        cout<<"-->Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
        cout<<"-->Work Books for Home Assignment."<<endl;
        cout<<"-->Common Phase Tests across the country."<<endl;
        cout<<"-->Chapter Practice Problems (CPP)"<<endl;
        cout<<"-->Class Learning Improvement Program (CLIP)"<<endl;
        cout<<"-->Success Potential Index (SPI"<<endl;
        cout<<"-->Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
        cout<<"-->Regular feedback & Test Analysis Sessions."<<endl;
        cout<<"-->Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
        cout<<"DURATION :"<<endl;
        cout<<"About 175 hrs. Including classroom interaction and tests."<<endl<<endl;


    }

    else  if(strcmp(names,"SHIKSHA1")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl<<endl;
        cout<<"-->Entire course will be covered in 4 phases."<<endl;
        cout<<"-->Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
        cout<<"-->Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
        cout<<"-->Work Books for Home Assignment."<<endl;
        cout<<"-->Common Phase Tests across the country."<<endl;
        cout<<"-->Chapter Practice Problems (CPP)"<<endl;
        cout<<"-->Class Learning Improvement Program (CLIP)"<<endl;
        cout<<"-->Success Potential Index (SPI"<<endl;
        cout<<"-->Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
        cout<<"-->Regular feedback & Test Analysis Sessions."<<endl;
        cout<<"-->Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
        cout<<"DURATION :"<<endl;
        cout<<"About 175 hrs. Including classroom interaction and tests."<<endl<<endl;
}

else  if(strcmp(names,"SHIKSHA2")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl<<endl;
        cout<<"-->Entire course will be covered in 4 phases."<<endl;
        cout<<"-->Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
        cout<<"-->Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
        cout<<"-->Work Books for Home Assignment."<<endl;
        cout<<"-->Common Phase Tests across the country."<<endl;
        cout<<"-->Chapter Practice Problems (CPP)"<<endl;
        cout<<"-->Class Learning Improvement Program (CLIP)"<<endl;
        cout<<"-->Success Potential Index (SPI"<<endl;
        cout<<"-->Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
        cout<<"-->Regular feedback & Test Analysis Sessions."<<endl;
        cout<<"-->Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
        cout<<"DURATION :"<<endl;
        cout<<"About 175 hrs. Including classroom interaction and tests."<<endl<<endl;

}

else  if(strcmp(names,"SHIKSHA3")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl<<endl;
        cout<<"-->Entire course will be covered in 4 phases."<<endl;
        cout<<"-->Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
        cout<<"-->Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
        cout<<"-->Work Books for Home Assignment."<<endl;
        cout<<"-->Common Phase Tests across the country."<<endl;
        cout<<"-->Chapter Practice Problems (CPP)"<<endl;
        cout<<"-->Class Learning Improvement Program (CLIP)"<<endl;
        cout<<"-->Success Potential Index (SPI"<<endl;
        cout<<"-->Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
        cout<<"-->Regular feedback & Test Analysis Sessions."<<endl;
        cout<<"-->Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
        cout<<"DURATION :"<<endl;
        cout<<"About 175 hrs. Including classroom interaction and tests."<<endl<<endl;

}

else  if(strcmp(names,"SHIKSHA4")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl<<endl;
        cout<<"-->Entire course will be covered in 4 phases."<<endl;
        cout<<"-->Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
        cout<<"-->Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
        cout<<"-->Work Books for Home Assignment."<<endl;
        cout<<"-->Common Phase Tests across the country."<<endl;
        cout<<"-->Chapter Practice Problems (CPP)"<<endl;
        cout<<"-->Class Learning Improvement Program (CLIP)"<<endl;
        cout<<"-->Success Potential Index (SPI"<<endl;
        cout<<"-->Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
        cout<<"-->Regular feedback & Test Analysis Sessions."<<endl;
        cout<<"-->Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
        cout<<"DURATION :"<<endl;
        cout<<"About 175 hrs. Including classroom interaction and tests."<<endl<<endl;
}

else  if(strcmp(names,"MEDDI")==0)
        {
            cout<<"COURSE STRUCTURE :"<<endl<<endl;
        cout<<"-->Entire course will be covered in 4 phases."<<endl;
        cout<<"-->Subjects covered will be Science (Physics, Chemistry & Biology), Mathematics and Mental Ability."<<endl;
        cout<<"-->Single comprehensive study material. Additional problems will be supplemented wherever necessary students should not require any additional books etc."<<endl;
        cout<<"-->Work Books for Home Assignment."<<endl;
        cout<<"-->Common Phase Tests across the country."<<endl;
        cout<<"-->Chapter Practice Problems (CPP)"<<endl;
        cout<<"-->Class Learning Improvement Program (CLIP)"<<endl;
        cout<<"-->Success Potential Index (SPI"<<endl;
        cout<<"-->Students also gain important exam practice through quizzes, phase tests, & mock tests (conducted in a simulated environment giving the students a ‘feel’ of the real exam) that can help them improve their examination temperament a necessary element for success in any competitive exam"<<endl;
        cout<<"-->Regular feedback & Test Analysis Sessions."<<endl;
        cout<<"-->Dedicated academic operations team provides feedback at any point of time apart from scheduled parent teacher meetings."<<endl;
        cout<<"DURATION :"<<endl;
        cout<<"About 175 hrs. Including classroom interaction and tests."<<endl<<endl;

}

      else cout<<" doesnt exist";

}


      void feestructure()
      {
          cout<<" Fee for all medical courses is INR 5Lacs"<<endl;
          cout<<" Fee for all non-medical courses is INR 3Lacs"<<endl<<endl;

      }

      void dispcontactdetails()
      {
          cout<<" CONTACT NO. FOR PRODIGY: 011-2345689,011-23456432"<<endl;
           cout<<" CONTACT NO. FOR Allen: 011-2345689,011-23456432"<<endl<<endl;
      }
};

//*********************Combined class of Smart city - KOTA************************//


class SmartCity{

public:
    void modules()
    {
    cout<<" *******************************************************Welcome to Smart city! Different modules of Smart City project**************************************************"<<endl;
    cout<<"1. Housing"<<endl;
    cout<<"2. Tourism"<<endl;
    cout<<"3. Education"<<endl;
    cout<<"4. Job Seeker"<<endl;
    }


    void Housing_module()
    {
 hostel h;
 pg p;
 hotel htl;
 carent c;
 char types[30],hostel_name[30],pg_name[30],hotel_name[30];
 cout<<"                      WELCOME TO HOUSING IN KOTA!            ";
 cout<<endl<<"                        experience best stay                 ";
 cout<<endl<<"                       Available hostels:                              ";
 cout<<endl<<" * Raj Niwas(3 star)                                ";
 cout<<endl<<"   Twin sharing                         Rs.250 per day ";
 cout<<endl<<"   Quad sharing                         Rs.150 per day ";
 cout<<endl<<" * Krishna(2 star)                                  ";
 cout<<endl<<"   Twin sharing                         Rs.220 per day ";
 cout<<endl<<"   Quad sharing                         Rs.180 per day ";
 cout<<endl<<"                      Available PG's:                              ";
 cout<<endl<<" * Prateek PG(4 star)                                ";
 cout<<endl<<"   Twin sharing                         Rs.500 per day ";
 cout<<endl<<"   Quad sharing                         Rs.400 per day ";
 cout<<endl<<" * Aastha PG(3 star)                                  ";
 cout<<endl<<"   Twin sharing                         Rs.450 per day ";
 cout<<endl<<"   Quad sharing                         Rs.500 per day ";
 cout<<endl<<"                      Available Hotels:                              ";
 cout<<endl<<" * International Grand(4 star)                                ";
 cout<<endl<<"   Single occupancy                     Rs.3000 per day ";
 cout<<endl<<"   Twin sharing                         Rs.2000 per day ";
 cout<<endl<<"   Quad sharing                         Rs.1500 per day ";
 cout<<endl<<" *  Country Inn(4 star)                                  ";
 cout<<endl<<"   Single occupancy                     Rs.5000 per day ";
 cout<<endl<<"   Twin sharing                         Rs.3000 per day ";
 cout<<endl<<"   Quad sharing                         Rs.2000 per day ";
 cout<<endl;
 label:
 {
 cout<<"Enter the type of housing you want "; //hostel/pg/hotel//
 cin>>types;
 if(strcmpi(types,"hostel")==0)
 {
  h.input();
  cout<<"Enter the hostel name in which you want to stay ";
  cin>>hostel_name;
  int f1=h.input1(hostel_name);
  if(f1==-1)
  goto label;
  else
  h.display(hostel_name);
 }
 else if(strcmpi(types,"pg")==0)
 {
  p.input();
  cout<<"Enter the PG name in which you want to stay ";
  cin>>pg_name;
  int f2=p.input2(pg_name);
  if(f2==-1)
  goto label;
  else
  p.display(pg_name);
 }
 else if(strcmpi(types,"hotel")==0)
 {
  htl.input();
  cout<<"Enter the hotel name in which you want to stay ";
  cin>>hotel_name;
  int f=htl.input3(hotel_name);
  if(f==-1)
  goto label;
  else
  htl.display(hotel_name);
 }
}
cout<<endl<<"Do you want to rent a car for your stay? ";
char answer,carname1[30];
cin>>answer;
if(answer=='y')
 {
    cout<<endl<<endl;
    cout<<"                                Welcome to car rental services!";
    cout<<endl<<endl<<"  Car Name                               Car Model                                   Rent per day";
    cout<<endl<<"* Maruti Suzuki                             RJ-20                                          100";
    cout<<endl<<"* Maruti Suzuki                             RJ-34                                          120";
    cout<<endl<<"* Maruti Suzuki                             RJ-40                                          200";
    cout<<endl<<"* Wagon R                                   RJ-22                                          120";
    cout<<endl<<"* Wagon R                                   RJ-30                                          180";
    cout<<endl<<"* Wagon R                                   RJ-10                                          100";
    cout<<endl<<" Enter car name ";
    cin>>carname1;
    cout<<endl;
 	c.input4(carname1);
 	c.display(carname1);
 }

    }


    void Tourism_module()
    {
        int c,ch;
   cout<<"\t\t\t\t\t\t\t\t     KOTA TRAVEL GUIDE"<<endl;
   cout<<"\t\t\t\t\t\t\t\tAn Insight Into KOTA Tourism"<<endl<<endl<<endl;
   t.intro();
   t.tourist_attractions();
   do{
   cout<<"\nSelect your choice (Enter 0 to exit): ";  //Choice out the mentioned tourist attractions
   cin>>c;
   cout<<endl;
   switch(c)
   {
      case 0: cout<<"Thanks for the visit"; break;

       case 1: fp.display();
                do{cout<<"Which place would you like to visit?\nEnter your choice (Enter 0 to go back): ";
                cin>>ch;    //Choice out of the mentioned Forts and Palaces
                switch(ch)  //Nested switch case
                {
                    case 0: system("cls"); t.tourist_attractions(); break;
                    case 1: fp.CityPalace();
                            goto_forts_and_palaces();
                            break;
                    case 2: fp.JagmandirPalace();
                            goto_forts_and_palaces();
                            break;
                    case 3: fp.RanijiKiBaoli();
                            goto_forts_and_palaces();
                            break;
                    case 4: fp.AbhedaMahal();
                            goto_forts_and_palaces();
                            break;
                    case 5: fp.UmedBhawan();
                            goto_forts_and_palaces();
                            break;
                    default: cout<<"Your choice do not match";
                }}while(ch==1 || ch==2 || ch==3 || ch==4 || ch==5);
                break;
       case 2: g.display();
               do{cout<<"Which place would you like to visit?\nEnter your choice (Enter 0 to go back): ";
                cin>>ch;  //Choice out of the mentioned Gardens
                switch(ch)
                {
                   case 0: system("cls"); t.tourist_attractions(); break;
                    case 1: g.SevenWondersPark();
                            goto_gardens();
                            break;
                    case 2: g.ChambalGardens();
                            goto_gardens();
                            break;
                    case 3: g.Zoo();
                            goto_gardens();
                            break;
                    case 4: g.ChatraVilas();
                            goto_gardens();
                            break;
                    case 5: g.Darrah();
                            goto_gardens();
                            break;
                    case 6: g.LuckyBurj();
                            goto_gardens();
                            break;
                    default: cout<<"Your choice do not match";
                }}while(ch==1 || ch==2 || ch==3||ch==4||ch==5||ch==6);
               break;
       case 3: temp.display();
               do{cout<<"Which place would you like to visit?\nEnter your choice (Enter 0 to go back): ";
                cin>>ch;   //Choice out of the mentioned Temples
                switch(ch)
                {
                    case 0: system("cls"); t.tourist_attractions(); break;
                    case 1: temp.GaradiaMahadev();
                            goto_temples();
                            break;
                    case 2: temp.Shivpuri();
                            goto_temples();
                            break;
                    case 3: temp.GodavriDham();
                            goto_temples();
                            break;
                    case 4: temp.Kansua();
                            goto_temples();
                            break;
                    case 5: temp.KhadeGanesh();
                            goto_temples();
                            break;
                    default: cout<<"Your choice do not match";
                }}while(ch==1||ch==2||ch==3||ch==4||ch==5);
               break;
       case 4: m.display();
               do{cout<<"Which place would you like to visit?\nEnter your choice (Enter 0 to go back): ";
                cin>>ch;  //Choice out of the mentioned museums
                switch(ch)
                {
                    case 0: system("cls"); t.tourist_attractions(); break;
                    case 1: m.GovMuseum();
                            goto_museums();
                            break;
                    case 2: m.RaoMadhoMuseum();
                            goto_museums();
                            break;
                    default: cout<<"Your choice do not match";
                }}while(ch==1||ch==2);
               break;
       case 5: lw.display();
               do{cout<<"Which place would you like to visit?\nEnter your choice (Enter 0 to go back): ";
                cin>>ch;  //Choice out of the mentioned lakes and waterfalls
                switch(ch)
                {
                    case 0: system("cls"); t.tourist_attractions(); break;
                    case 1: lw.KishoreSagar();
                            goto_lakes_and_waterfalls();
                            break;
                    case 2: lw.Gaipernath();
                            goto_lakes_and_waterfalls();
                            break;
                    case 3: lw.KotaBarrage();
                            goto_lakes_and_waterfalls();
                            break;
                    default: cout<<"Your choice do not match";
                }}while(ch==1||ch==2||ch==3);
               break;
         default: cout<<"Your choice do not match.\n";

   }
   } while(c!=0);


}

    void Education_module()
    {
        student s;
    institutes i;
    courses c;

    int num;
    cout<<"    WELCOME TO KOTA EDUCATION!   "<<endl;
    cout<<"    EXPERIENCE BEST STUDY         "<<endl;

    s.input();

    do{
    cout<<" Enter what do you want to know(prefer going in the ascending order to get all the details clear)"<<endl;
    cout<<" 1. institute names"<<endl;
    cout<<" 2. course names"<<endl;
    cout<<" 3. Fee structure"<<endl;
    cout<<" 4. course details"<<endl;
    cout<<" 5. contact details"<<endl;
    cout<<" 0. Exit"<<endl;

    cin>>num;

    if(num==1)
       i.institutenames();
    else if (num==2)
       c.display();
    else if(num==3)
       c.feestructure();
    else if(num==4)
       c.displaycoursedetails();
    else if(num==5)
       c.dispcontactdetails();
    else if(num==0)
       exit(0);
    else cout<<" invalid option";
   }while(1);
}


    void JobSeeker_module()
    {
        teaching t ;
        engineer e ;
        doctor d ;
        cout<<endl<<"Hey Jobseeker!"<<endl<<"Welcome to Kota city!"<<endl<<"Seeking for a job?"<<endl<<"No need to worry. You can have plenty of job opportunities here.";
        int a;
        cout<<endl<<"Enter the number for the job you are searching for :"<<endl;
        cout<<"Enter 1 for teaching"<<endl;
        cout<<"Enter 2 for engineering job"<<endl;
        cout<<"Enter 3 for doctor"<<endl;
        cin>> a;
        if( a==1)
        {
        cout<<endl<<"You have selected teaching job."<<endl<<"You necessarily need to have previous job experience of atleast 2 years to apply for this job.";
        cout<<endl<<"For job experience 2 years: Average salary = 10000 per month";
        cout<<endl<<"For job experience between 3 to 5 years : Average salary= 15000 per month";
        cout<<endl<<"For job experience more than 5 years: Average salary=20000 per month.";
        t.input();
        t.input1();
        cout<<endl;

        }
        else if(a==2)
        {
        cout<<endl<<"You have selected engineering job";
        cout<<endl<<"You need to know atleast 3 skills to apply for this job";
        cout<<endl<<"If you know 3 skills: Average salary= 20,000 per month";
        cout<<endl<<"If you know skills more than 3 but less than 5: Average salary= 25,000-30,000 per month";
        cout<<endl<<"If you know more than 5 skills: Average salary= 40,000-50,000 per month.";
        e.input();
        e.input3();
        cout<<endl;

        }
        else if(a==3)
        {
        cout<<endl<<"You have selected for doctor job.";
        cout<<endl<<"To apply for this job, you should have minimum previous job experience of 3 years.";
        cout<<endl<<"For previous job experience of 3 years: Average salary= 100000 per month.";
        cout<<endl<<"For previous job experience of more than 3 years but less than 7 years: Average salary= 200000-300000 per month";
        cout<<endl<<"For previous job experience of more than 7 years: Average salary=300000-400000 per month.";
        d.input();
        d.input2();
        cout<<endl;
        }
        else
        {
        cout<<endl<<"You applied for wrong job";
        }
    }
};


int main()
{
    SmartCity S;
    S.modules();
    int c;
    char ans='y';
    while(ans)
     {
     	label1:
		cout<<endl<<"Which module would you like to visit?"<<endl;
		cout<<"Enter 1 for Housing"<<endl;
        cout<<"Enter 2 for Tourism"<<endl;
        cout<<"Enter 3 for Education"<<endl;
        cout<<"Enter 4 for Job Seeker"<<endl;
        cin>>c;
        switch(c)
		{
            case 1: S.Housing_module();
                    break;
                    goto label1;
            case 2: S.Tourism_module();
			        break;
                    goto label1;
            case 3: S.Education_module();
                    break;
                    goto label1;
            case 4: S.JobSeeker_module();
                    break;
                    goto label1;
            default:cout<<endl<<"Do you want to continue?";
                    cin>>ans;

        }
        cout<<endl<<"Do you want to continue?";
        cin>>ans;
        if(ans!='y')
         exit(0);
     }
    return 0;
}
