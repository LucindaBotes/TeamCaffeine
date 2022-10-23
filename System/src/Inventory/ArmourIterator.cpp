#include <Inventory/ArmourIterator.h>

using namespace std;

// MedicsIterator<MedicNode>::MedicsIterator() : head(0), current(0) {};

// MedicsIterator<MedicNode>::MedicsIterator(const Medics &source, MedicNode *mn) : head(source.head), current(mn) {}

// MedicNode& MedicsIterator<MedicNode>::operator*(){
//   return this->current->medic;
// }

// MedicsIterator<MedicNode>::MedicsIterator<MedicNode>::operator++(){
//   if(this != null){
//     this->current = this->current->next;
//   }
//   return *this;
// }

// bool MedicsIterator<MedicNode>::operator==(const MedicsIterator<MedicNode>& rhs) const{
//   return this->current == rhs.current;
// }

// ========================================= Medics.h ==================================================//
// #include <Inventory/MedicNode.h>
// #include <Inventory/MedicsIterator.h>

// friend class MedicsIterator;
// MedicNode *head;
// void enqueue (MedicNode);
// bool isEmpty();
// MedicNode dequeue();
// MedicsIterator<MedicNode> begin();
// MedicsIterator<MedicNode> end();

// ========================================= Medics.cpp ==================================================//
// void Medics::enqueue(MedicNode medicNode){
//   MedicNode * mn = new MedicNode();
//   mn->medic = medicNode;
//   if(isEmpty()){
//     mn->next = mn;
//     mn->previous = mn;
//   }
//   else {
//     mn->next = this->head;
//     mn->previous = this->head->previous;
//     this->head->previous->next = mn;
//     this->head->previous = mn;
//   }
//   this->head = mn;
// }

// MedicNode Medics::dequeue(){
//   if(isEmpty()){
//     return 0;
//   }
//   else if (this->head->previous == this->head){
//     MedicNode * temp = this->head->previous;
//     this->head->previous->next = this->head;
//     return temp->medic;
//   }
// }

// bool Medics::isEmpty(){
//   return this->head == 0;
// }

// MedicsIterator<MedicNode> Medics::begin(){
//   return MedicsIterator<MedicNode>(*this, this->head);
// }

// MedicsIterator<MedicNode> Medics::end(){
//   return MedicsIterator<MedicNode>(*this, this->head->previous);
// }
