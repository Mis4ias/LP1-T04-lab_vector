#ifndef __VECLASS_H__
#define __VECLASS_H__

#include <iostream>
#include <vector>

template <class T>
class Vectors {
	private:
		std::vector<T> data;
	
	public:		
		Vectors(){ }
		Vectors(size_t size, bool init = true){
			(init) ? data.resize(size) : data.reserve(size);
		}
		
		
		Vectors(const Vectors& right_object): data(right_object.data) { }
		/** @brief Get of size */	
		size_t get_size(){
			return data.size();
		}	
		
		Vectors concat(const Vectors& left_object, const Vectors& right_object){
			Vectors result_object(left_object.data.size() + right_object.data.size());
			for(size_t i = 0; i < result_object.data.size(); i++){
				(i < left_object.data.size()) ? result_object.data[i] = left_object.data[i] : right_object.data[i];
			}
		return result_object;
		}		
		
		friend std::istream& operator >>(std::istream& in, Vectors& right_object){
			for(size_t i = 0; i < right_object.data.size(); i++){
				in>>right_object.data[i];
			}
		return in;
		}	
		
		friend std::ostream& operator <<(std::ostream& out, Vectors& right_object){
			for(size_t i = 0; i < right_object.data.size(); i++){
				out<<right_object.data[i]<<" ";
			}
		out<<std::endl;
		return out;
		}

};		
#endif // __VECLASS_H__
